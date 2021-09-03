using Elf.Natives;
using GLibcInterop;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

namespace Elf
{
    public unsafe class ElfHeader
    {
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        private unsafe delegate void InitDelegate(int argc, byte** argv, byte** envp);

        private static readonly byte[] MagicSymbol = { 0x7F, 0x45, 0x4c, 0x46 };

        private byte* _memory;
        private byte* _baseAddress;
        private ElfHeaderNative* obj;

        private ElfSymbolArray _symbolArray;
        private ElfStringTable _stringTable;

        private LinkMap* _map;

        public readonly ElfProgramHeaderArray ProgramHeaders;
        public readonly ElfSectionHeaderArray SectionHeaders;

        public readonly ElfSectionHeader DynamicSectionHeader;

        private readonly Dictionary<string, IntPtr> _dependencyHandles = new Dictionary<string, IntPtr>(); 
        
        public ElfSymbolArray SymbolArray
        {
            get
            {
                if (_symbolArray != null)
                {
                    return _symbolArray;
                }
                LoadSymbols();
                return _symbolArray;
            }
        }

        public ElfStringTable StringTable
        {
            get
            {
                if (_stringTable != null)
                {
                    return _stringTable;
                }
                LoadStringTable();
                return _stringTable;
            }
        }

        public ElfHeader(byte* ptr)
        {
            _memory = ptr;
            obj = (ElfHeaderNative*)ptr;

            if ((obj->Magic[0] != MagicSymbol[0])
                || (obj->Magic[1] != MagicSymbol[1])
                || (obj->Magic[2] != MagicSymbol[2])
                || (obj->Magic[3] != MagicSymbol[3]))
            {
                throw new InvalidOperationException("Not a valid ELF header.");
            }

            Debug.WriteLine(sizeof(ElfProgramHeaderNative.DataLayout32));
            Debug.WriteLine(sizeof(ElfProgramHeaderNative.DataLayout64));
            Debug.WriteLine(sizeof(ElfProgramHeaderNative));

            Assert(obj->ProgramHeaderSize == sizeof(ElfProgramHeaderNative));
            Assert(obj->SectionHeaderSize == sizeof(ElfSectionHeaderNative));

            ProgramHeaders = new ElfProgramHeaderArray(ptr, (ulong)obj->ProgramHeaderOffset, obj->ProgramHeaderCount);
            SectionHeaders = new ElfSectionHeaderArray(ptr, (ulong)obj->SectionHeaderOffset, obj->SectionHeaderCount, obj->SectionHeaderStringIndex);

            DynamicSectionHeader = SectionHeaders.FirstOrDefault(header => header.Type == ElfSectionHeaderType.Dynamic);
        }

        [DllImport("libc")]
        public static extern IntPtr mmap(IntPtr addr, UIntPtr length, int protectionFlags, int mappingFlags, int fileDescriptor, int offset);

        [DllImport("libc")]
        public static extern IntPtr mprotect(IntPtr addr, UIntPtr length, int protectionFlags);

        [DllImport("dl")]
        public static extern IntPtr dlopen([MarshalAs(UnmanagedType.LPStr)] string name, int mode = 0x01);

        [DllImport("dl")]
        public static extern IntPtr dlsym(IntPtr handle, [MarshalAs(UnmanagedType.LPStr)] string name);

        public static IntPtr Map(IntPtr address, ulong length, MmapProtectionFlags protectionFlags, MmapMappingFlags mappingFlags)
        {
            var result =  mmap(address, (UIntPtr)length, (int)protectionFlags, (int)(mappingFlags | MmapMappingFlags.Anonymous), -1, 0);
            if ((long)result == -1)
            {
                throw new InvalidOperationException($"mmap failed with {Marshal.GetLastWin32Error()}");
            }
            return result;
        }

        public static IntPtr Protect(IntPtr address, ulong length, MmapProtectionFlags protectionFlags)
        {
            ulong result = (ulong)mprotect(address, (UIntPtr)length, (int)protectionFlags);
            if (result != 0)
            {
                throw new InvalidOperationException($"mprotect failed with {Marshal.GetLastWin32Error()}");
            }
            return (IntPtr)result;
        }

        public static ulong Align(ulong value)
        {
            return value & (~0xFFFul);
        }

        public void LoadProgramHeaders()
        {
            ulong lowAddress = ulong.MaxValue;
            ulong highAddress = ulong.MinValue;

            var needsLoading =
                 ProgramHeaders.Where(header => header.Type == ElfProgramHeaderType.Load).ToList();

            if (needsLoading.Count == 0)
            {
                //Console.WriteLine("No program header requires loading.");
                return;
            }

            foreach (var programHeader in needsLoading)
            {
                lowAddress = Math.Min(lowAddress, programHeader.VirtualAddress);
                highAddress = Math.Max(highAddress, programHeader.VirtualAddress + programHeader.MemorySize);
            }

            //Console.WriteLine($"Mapping a memory block corresponding to 0x{lowAddress:x} and 0x{highAddress:x}...");
            var baseAddress = Map(IntPtr.Zero, highAddress - lowAddress, MmapProtectionFlags.Write, MmapMappingFlags.Private | MmapMappingFlags.Anonymous);
            //Console.WriteLine($"Base address of library is: 0x{(ulong)baseAddress:x}");

            //Console.WriteLine($"Setting permissions...");

            foreach (var programHeader in needsLoading)
            {
                //Console.WriteLine($"0x{programHeader.VirtualAddress:x}" +
                //    $"..0x{programHeader.VirtualAddress + programHeader.MemorySize:x}:" +
                //    $" {(ElfProgramHeaderLoadFlags)programHeader.Flags}");

                var mmapFlags = MmapProtectionFlags.None;
                var programFlags = programHeader.Flags;

                var headerBaseAddress = (ulong)baseAddress + programHeader.VirtualAddress;
                var mapAddress = Align(headerBaseAddress);
                var offset = headerBaseAddress - mapAddress;
                Protect((IntPtr)mapAddress, programHeader.MemorySize + offset, MmapProtectionFlags.All);

                if ((programFlags & (int)ElfProgramHeaderLoadFlags.Execute) != 0)
                {
                    mmapFlags |= MmapProtectionFlags.Execute;
                }
                if ((programFlags & (int)ElfProgramHeaderLoadFlags.Read) != 0)
                {
                    mmapFlags |= MmapProtectionFlags.Read;
                }
                if ((programFlags & (int)ElfProgramHeaderLoadFlags.Write) != 0)
                {
                    mmapFlags |= MmapProtectionFlags.Write;
                }

                Unsafe.CopyBlockUnaligned(ref *((byte *)headerBaseAddress), ref *(_memory + programHeader.Offset), (uint)programHeader.FileSize);

                //Console.WriteLine("Copied.");

                Protect((IntPtr)mapAddress, programHeader.MemorySize, mmapFlags);

                //Console.WriteLine($"Mapped to 0x{headerBaseAddress:x}");
            }

            _baseAddress = (byte*)baseAddress;
            //Console.WriteLine($"Final base address: 0x{(ulong)_baseAddress:x}");
        }

        public void ResolveDependencies()
        {
            var dynSection = DynamicSectionHeader;
            //Console.WriteLine($"Found dynamic section:\n{dynSection}");

            // For performance reasons.
            var items = dynSection.DynamicSectionItems.ToList();

            var strTable = items.First(item => item.Tag == ElfDynamicSectionItemType.StrTab);
            //Console.WriteLine($"String table at: 0x{(ulong)strTable.Pointer:x}");

            //Console.WriteLine($"Needed dynamic libraries:");
            foreach (var item in items.Where(item => item.Tag == ElfDynamicSectionItemType.Needed))
            {
                var name = Marshal.PtrToStringAnsi((IntPtr)(_memory + (ulong)strTable.Pointer + item.Value));
                var addr = dlopen(name);
                _dependencyHandles.Add(name, addr);
                //Console.WriteLine(name);
                //Console.WriteLine($"Loaded at address: 0x{(ulong)addr:x}");
            }
        }

        public void LoadStringTable()
        {
            var dynSection = DynamicSectionHeader;
            _stringTable = new ElfStringTable(_memory,
                dynSection.DynamicSectionItems.First(item => item.Tag == ElfDynamicSectionItemType.StrTab).Value
                );
        }

        public void LoadSymbols()
        {
            var dynSection = DynamicSectionHeader;
            //Console.WriteLine($"Found dynamic section:\n{dynSection}");

            // For performance reasons.
            var items = dynSection.DynamicSectionItems.ToList();
            var symbolTable = items.First(item => item.Tag == ElfDynamicSectionItemType.SymTab);

            //Console.WriteLine($"Symbol table starts at: 0x{symbolTable.Value:x}");
            var symbolTableSection = SectionHeaders.First(header => header.Offset == symbolTable.Value);
            //Console.WriteLine($"Symbol table section found at: 0x{(ulong)symbolTableSection.Pointer:x}");
            //Console.WriteLine($"Symbol table entry size: {symbolTableSection.EntrySize}");
            //Console.WriteLine($"Symbol table size: {symbolTableSection.Size}");

            Debug.Assert(symbolTableSection.EntrySize == (ulong)Marshal.SizeOf<ElfSymbolNative>());
            var symbolArray = new ElfSymbolArray(_memory, symbolTableSection.Offset, symbolTableSection.Size / symbolTableSection.EntrySize);

            var strTable = items.First(item => item.Tag == ElfDynamicSectionItemType.StrTab);
            //Console.WriteLine($"String table at: 0x{(ulong)strTable.Pointer:x}");

            foreach (var symbol in symbolArray)
            {
                symbol.StringTable = _memory + (ulong)strTable.Pointer;
                //Console.WriteLine(symbol);
            }

            _symbolArray = symbolArray;
        }

        [DllImport("dl")]
        public static extern void _dl_get_tls_static_info(out UIntPtr size, out UIntPtr alignment);

        public void HandleTLS()
        {
            _dl_get_tls_static_info(out var officialSize, out var officialAlign);

            var rtld_global = RtldGlobal.GetInstance();

            Debug.Assert(rtld_global->TlsStaticAlign == (ulong)officialAlign);
            Debug.Assert(rtld_global->TlsStaticSize == (ulong)officialSize);

            //Console.WriteLine($"DTV has gaps: {rtld_global->TlsDtvHasGaps}");
            //Console.WriteLine($"DTV max index: {rtld_global->TlsDtvMaxIndex}");

            var tlsSection = ProgramHeaders.Where(h => h.Type == ElfProgramHeaderType.ThreadLocalStorage)
                .FirstOrDefault();

            if (tlsSection == null)
            {
                //Console.WriteLine("Library does not have TLS.");
                return;
            }

            _map = (LinkMap*)Marshal.AllocHGlobal(sizeof(LinkMap));
            Unsafe.InitBlockUnaligned(_map, 0, (uint)sizeof(LinkMap));
            _map->TlsBlockAlignment = tlsSection.Align;
            _map->TlsBlockSize = tlsSection.MemorySize;
            _map->TlsInitImageSize = tlsSection.FileSize;

            //Console.WriteLine("Ok here.");

            // We need to allocate a new array, as the given memory pointer
            // does not need to be valid after the library has loaded.
            var tlsImagePtr = (byte *)Marshal.AllocHGlobal((int)tlsSection.FileSize);
            var tlsImageInFile = _memory + tlsSection.Offset;

            Unsafe.CopyBlockUnaligned(ref tlsImagePtr[0], ref tlsImageInFile[0], (uint)tlsSection.FileSize);

            //Console.WriteLine($"TLS image in file: {tlsSection.FileSize} bytes.");
            //for (ulong i = 0; i < tlsSection.FileSize; ++i)
            //{
            //    Console.WriteLine($"0x{tlsImageInFile[i]}");
            //}

            _map->TlsInitialImage = tlsImagePtr;

            var modId = GlibcTls.GetNextModuleId();
            _map->TlsModuleId = modId;

            //Console.WriteLine($"Module id: {modId}");
            //Console.WriteLine($"Initial image: 0x{(ulong)_map->TlsInitialImage:x}");
            //Console.WriteLine($"Initial image size: {_map->TlsInitImageSize}");
            //Console.WriteLine($"Block size: {_map->TlsBlockSize}");
            //Console.WriteLine($"Alignment: {_map->TlsBlockAlignment}");


            GlibcTls.AddToSlotInfo(_map);

            //Console.WriteLine("TLS registered successfully.");
        }

        public void ApplyRelocations()
        {
            var dynSection = DynamicSectionHeader;
            //Console.WriteLine($"Found dynamic section:\n{dynSection}");

            var items = dynSection.DynamicSectionItems.ToList();
            var relaTable = items.First(item => item.Tag == ElfDynamicSectionItemType.Rela);
            var relaSize = items.First(item => item.Tag == ElfDynamicSectionItemType.RelaSz);
            var relaEntrySize = items.First(item => item.Tag == ElfDynamicSectionItemType.RelaEnt);

            Debug.Assert(relaEntrySize.Value == (ulong)sizeof(ElfRelaNative));
            //Console.WriteLine($"Found relocation with addend section at: 0x{relaTable.Value:x} ({relaSize.Value} bytes)");

            var relaArr = new ElfRelaArray(_memory, relaTable.Value, relaSize.Value / relaEntrySize.Value);

            //Console.WriteLine("Analyzing jump slots...");
            var jumpRel = items.First(item => item.Tag == ElfDynamicSectionItemType.JmpRel);
            var jumpRelSection = SectionHeaders.First(header => header.Offset == jumpRel.Value);
            var jumpRelaArr = new ElfRelaArray(_memory, jumpRelSection.Offset, jumpRelSection.Size / jumpRelSection.EntrySize);

            foreach (var rela in relaArr.Concat(jumpRelaArr))
            {
                //Console.WriteLine("Relocation: ");
                //Console.WriteLine(rela.Type);
                void** affected = (void**)(_baseAddress + rela.Offset);
                //Console.WriteLine($"Address: 0x{(ulong)affected:x}");
                //Console.WriteLine($"Original value: 0x{(ulong)*affected:x}");

                var symbolHandle = IntPtr.Zero;

                if (rela.DependsOnSymbol())
                {
                    symbolHandle = LookupSymbol(rela);
                }

                if (rela.Type.IsNone())
                {
                    continue;
                }
                else if (rela.Type.IsRelative())
                {
                    *affected = _baseAddress + rela.Addend;
                }
                else if (rela.Type.IsGlobDat() || rela.Type.IsJmpSlot() || rela.Type.Is64())
                {
                    *affected = (void*)((ulong)symbolHandle + rela.Addend);
                }
                else if (rela.Type.Is16())
                {
                    var affected16 = (ushort*)affected;
                    *affected16 = (ushort)((ulong)symbolHandle + rela.Addend);
                }
                else if (rela.Type.IsModule())
                {
                    *affected = (void *)_map->TlsModuleId;
                }
                else if (rela.Type.IsOffset())
                {
                    var currentSymbol = SymbolArray[rela.Symbol];
                    *affected = (void*)currentSymbol.Value;
                }
                else
                {
                    throw new NotImplementedException($"Unimplemented relocation type: {rela.Type}");
                }
                //Console.WriteLine($"Relocated value: 0x{(ulong)*affected:x}");
            }
        }

        private IntPtr LookupSymbol(ElfRela rela)
        {
            var currentSymbol = SymbolArray[rela.Symbol];
            // If current symbol is not undefined, apply it like normal.
            if (currentSymbol.Value != 0)
            {
                var handle = _baseAddress + currentSymbol.Value;
                return (IntPtr)handle;
            }
            else if (currentSymbol.Binding != ElfSymbolBinding.Weak)
            {
                foreach (var kvp in _dependencyHandles)
                {
                    var handle = dlsym(kvp.Value, currentSymbol.GetName(StringTable));
                    if (handle == IntPtr.Zero)
                    {
                        continue;
                    }
                    return handle;
                }
            }
            return IntPtr.Zero;
        }

        public void CallInitializers()
        {
            var items = DynamicSectionHeader.DynamicSectionItems.ToList();
            var initItem = items.First(item => item.Tag == ElfDynamicSectionItemType.Init);
            var initArrItem = items.First(item => item.Tag == ElfDynamicSectionItemType.InitArray);
            // Size, in bytes, NOT IN ELEMENTS!
            var initArrSizeItem = items.First(item => item.Tag == ElfDynamicSectionItemType.InitArraySz);
            var initArrCount = initArrSizeItem.Value / (ulong)sizeof(IntPtr);

            var args = Environment.GetCommandLineArgs();
            var env = Environment.GetEnvironmentVariables()
                .Cast<DictionaryEntry>()
                .Select(x => $"{x.Key}={x.Value}");

            int argc = args.Length;
            var argArr = args.Select(arg => Marshal.StringToHGlobalAnsi(arg)).ToArray();
            var envArr = env.Select(envv => Marshal.StringToHGlobalAnsi(envv))
                .Concat(new[] { IntPtr.Zero })
                .ToArray();

            var firstInitDelegate = Marshal.GetDelegateForFunctionPointer<InitDelegate>
                ((IntPtr)(_baseAddress + initItem.Value));

            //Console.WriteLine($"There are {initArrCount} initializers.");

            fixed (IntPtr* argv = &argArr[0])
            {
                fixed (IntPtr* envp = &envArr[0])
                {
                    //Console.WriteLine($"Calling first initializer.");

                    firstInitDelegate(argc, (byte**)argv, (byte**)envp);

                    //Console.WriteLine("Done.");

                    var initPtrs = new IntPtr[initArrCount];
                    Marshal.Copy((IntPtr)(_baseAddress + (ulong)initArrItem.Value), initPtrs, 0, (int)initArrCount);

                    //Console.WriteLine($"[{string.Join(",", initPtrs.Select(ptr => $"0x{(ulong)ptr:x}"))}]");

                    foreach (var initPtr in initPtrs)
                    {
                        //Console.WriteLine($"Calling initializer at 0x{(ulong)initPtr:x}");
                        var initDelegate = Marshal.GetDelegateForFunctionPointer<InitDelegate>(initPtr);
                        initDelegate(argc, (byte**)argv, (byte**)envp);
                        //Console.WriteLine("Done.");
                    }
                }
            }

            //Console.WriteLine("Freeing marshaled strings...");

            foreach (var arg in argArr)
            {
                Marshal.FreeHGlobal(arg);
            }

            foreach (var envptr in envArr)
            {
                Marshal.FreeHGlobal(envptr);
            }
        }

        public IntPtr FindSymbol(string name)
        {
            var strTable = StringTable;
            foreach (var sym in SymbolArray)
            {
                if (sym.GetName(strTable) == name)
                {
                    return (IntPtr)(_baseAddress + sym.Value);
                }
            }
            return IntPtr.Zero;
        }
        
        public override string ToString()
        {
            return
$@"ELF Header at: 0x{(ulong)_memory:x}
- Pointer class: {obj->Class}
- Endian: {obj->Endianess}
- ELF Version: {obj->Version}
- ABI: {obj->OsAbi}
- ABI Version: {obj->AbiVersion}
- Object type: {obj->Type}
- Instruction set: {obj->Machine}
- ELF Version: {obj->ElfVersion}
- Entry Point Address: 0x{(ulong)obj->Entry:x}
- Program Header Table Location: 0x{(ulong)obj->ProgramHeaderOffset:x}
- Section Header Table Location: 0x{(ulong)obj->SectionHeaderOffset:x}
- Flags: {obj->ArchitectureDependentFlags}
- Header size: {obj->ElfHeaderSize}
- Program Header Table Entry Size: 0x{(ulong)obj->ProgramHeaderSize:x}
- Program Header Table Entry Count: {obj->ProgramHeaderCount}
- Section Header Table Entry Size: 0x{(ulong)obj->SectionHeaderSize:x}
- Section Header Table Entry Count: {obj->SectionHeaderCount} 
- Section Header Table Name Index: {obj->SectionHeaderStringIndex}
";
        }

        private static void Assert(bool condition)
        {
            if (!condition)
            {
                throw new InvalidOperationException("Invalid ELF header");
            }
        }

        [DllImport("libc")]
        private static extern int arch_prctl(int code, long* addr);
        [DllImport("libc")]
        private static extern void* __tls_get_addr(tls_index* t);

        private const int ARCH_GET_FS = 0x1003;

        [StructLayout(LayoutKind.Explicit)]
        private struct dtv_t
        {
            [StructLayout(LayoutKind.Sequential)]
            public struct dtv_pointer_t
            {
                public void* address;
                public void* toFree;
            }

            [FieldOffset(0)]
            public UIntPtr counter;
            [FieldOffset(0)]
            public dtv_pointer_t pointer;
        }

        [StructLayout(LayoutKind.Sequential)]
        struct tls_index
        {
            public UIntPtr ti_module;
            public UIntPtr ti_index;
        };


        public static void InspectTLS()
        {
            long addr_long = 0;
            arch_prctl(ARCH_GET_FS, &addr_long);

            void* addr = (void*)addr_long;

            //Console.WriteLine($"FS is at: 0x{(ulong)addr:x}");
            //Console.WriteLine($"*FS is at: 0x{(ulong)*(void**)addr:x}");

            var dtvarr = (dtv_t*)((void**)addr)[1];
            //Console.WriteLine($"DTV array is at: 0x{(ulong)dtvarr:x}");

            //Console.WriteLine($"DTV array size: {dtvarr[-1].counter}");
            //Console.WriteLine($"DTV generation: {dtvarr[0].counter}");

            for (ulong i = 1; i < (ulong)dtvarr[-1].counter; ++i)
            {
                var index = new tls_index()
                {
                    ti_index = UIntPtr.Zero,
                    ti_module = (UIntPtr)i
                };
                var ptr = __tls_get_addr(&index);
                //Console.WriteLine($"ptr: 0x{(ulong)ptr:x}");
                if (ptr != null)
                {
                    //Console.WriteLine($"First word value: 0x{*(int*)ptr:x}");
                }
                else
                {
                    break;
                }
                //Console.WriteLine($"DTV[{i}] element address: 0x{(ulong)dtvarr[i].pointer.address:x}");
                //Console.WriteLine($"DTV[{i}] element toFree: 0x{(ulong)dtvarr[i].pointer.toFree:x}");
            }

            //Console.ReadLine();

            var global = RtldGlobal.GetInstance();

            foreach (var dtvslotarr in global->TlsDtvSlotInfoList)
            {
                foreach (var dtvslot in dtvslotarr)
                {
                    //Console.WriteLine($"Generation: {dtvslot.Generation}");
                    var map = dtvslot.LinkMap;
                    if (map == null)
                    {
                        //Console.WriteLine("null map");
                    }
                    else
                    {
                        //Console.WriteLine($"{map->TlsModuleId}, Size={map->TlsBlockSize}, InitImage=0x{(ulong)map->TlsInitialImage:x}");
                    }
                }
            }

            //Console.ReadLine();
        }
    }
}
