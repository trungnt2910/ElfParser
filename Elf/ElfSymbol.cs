using Elf.Natives;
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Text;

namespace Elf
{
    public unsafe class ElfSymbol
    {
        private byte* _memory;
        private ElfSymbolNative* _obj;

        public byte* StringTable;

        public ElfSymbol(byte* memory, ElfSymbolNative* obj)
        {
            _memory = memory;
            _obj = obj;
        }

        public ElfSymbolType Type
        {
            get
            {
                var info = Environment.Is64BitProcess ? _obj->Data64.Info : _obj->Data32.Info;
                return (ElfSymbolType)(info & 0xf);
            }
        }

        public ElfSymbolBinding Binding
        {
            get
            {
                var info = Environment.Is64BitProcess ? _obj->Data64.Info : _obj->Data32.Info;
                return (ElfSymbolBinding)(info >> 4);
            }
        }

        public string Name
        {
            get
            {
                if (StringTable == null)
                {
                    return null;
                }

                return Marshal.PtrToStringAnsi((IntPtr)(StringTable + (Environment.Is64BitProcess ? _obj->Data64.Name : _obj->Data32.Name)));
            }
        }

        public ushort SectionHeaderTableIndex
        {
            get => Environment.Is64BitProcess ? _obj->Data64.SectionHeaderTableIndex : _obj->Data32.SectionHeaderTableIndex;
        }

        public ushort Other => Environment.Is64BitProcess ? _obj->Data64.Other : _obj->Data32.Other;

        public ulong Value => Environment.Is64BitProcess? (ulong)_obj->Data64.Value : _obj->Data32.Value;

        public ulong Size => Environment.Is64BitProcess ? (ulong)_obj->Data64.Size : _obj->Data32.Size;

        public override string ToString()
        {
            return
$@"ELF Symbol:
- Name: {Name}
- Type: {Type}
- Binding: {Binding}
- Other: {Other}
- Value: 0x{Value:x}
- Size: {Size}
- Index: {SectionHeaderTableIndex}
";
        }

        public string GetName(ElfStringTable stringTable)
        {
            return stringTable.GetString(Environment.Is64BitProcess ? _obj->Data64.Name : _obj->Data32.Name);
        }
    }
}
