using Elf;
using GLibcInterop;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;

namespace ElfParser
{
    [UnmanagedFunctionPointer(CallingConvention.StdCall)]
    delegate void _startDelegate();

    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    delegate void PrintSecretDelegate();

    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    unsafe delegate void SortDelegate(int* begin, UIntPtr count);

    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    delegate int GetIntDelegate();
    
    static class Program
    {
        // public static unsafe Span<ProgramHeader> GetProgramHeaders(ElfHeader* header)
        // {
        //     return new Span<ProgramHeader>
        //         ((byte *)header + header->ProgramHeaderOffset, header->ProgramHeaderEntryCount);
        // }

        // public static unsafe Span<byte> GetData(byte* data, ProgramHeader* header)
        // {
        //     return new Span<byte>
        //         (data + header->Offset, (int)header->FileSize);
        // }

        // public static ulong Align(ulong value)
        // {
        //     return value & (~0xFFFul);
        // }

        // public static int SegmentFlagToMmapFlag(SegmentFlags value)
        // {
        //     int result = 0;
        //     if (Convert.ToBoolean((int)(value & SegmentFlags.Execute)))
        //     {
        //         result |= 0x04;
        //     }
        //     if (Convert.ToBoolean((int)(value & SegmentFlags.Write)))
        //     {
        //         result |= 0x02;
        //     }
        //     if (Convert.ToBoolean((int)(value & SegmentFlags.Read)))
        //     {
        //         result |= 0x01;
        //     }
        //     return result;
        // }

        // [DllImport("libc.so.6")]
        // public static extern IntPtr mmap(IntPtr addr, UIntPtr length, int protectionFlags, int mappingFlags, int fileDescriptor, int offset);

        // [DllImport("libc.so.6")]
        // public static extern IntPtr mprotect(IntPtr addr, UIntPtr length, int protectionFlags);

        public static unsafe void LoadTlsLib()
        {
            var stream = Assembly.GetExecutingAssembly().GetManifestResourceStream("ElfParser.test.TestApp.Lib.so")
    as UnmanagedMemoryStream;

            var header = new ElfHeader(stream.PositionPointer);

            //Console.WriteLine(header);

            //foreach (var programHeader in header.ProgramHeaders)
            //{
            //    Console.WriteLine(programHeader);
            //}

            //foreach (var sectionHeader in header.SectionHeaders)
            //{
            //    Console.WriteLine(sectionHeader);
            //}

            header.LoadProgramHeaders();

            header.ResolveDependencies();

            header.LoadSymbols();

            header.HandleTLS();

            header.ApplyRelocations();

            header.CallInitializers();

            var printSecretPtr = header.FindSymbol("PrintSecret");
            Console.WriteLine($"Print secret function is at: 0x{(ulong)printSecretPtr:x}");

            var printSecretFunc = Marshal.GetDelegateForFunctionPointer<PrintSecretDelegate>(printSecretPtr);

            Console.WriteLine("Trying to print our secret!");
            printSecretFunc();
            Console.WriteLine("Done.");

            var rand = new Random();
            var arr = Enumerable.Range(0, 20).Select(i => rand.Next(1, 100)).ToArray();
            Console.WriteLine($"Sorting array: [{string.Join(',', arr)}]");

            var sortPtr = header.FindSymbol("Sort");
            Console.WriteLine($"Sort function is at: 0x{(ulong)sortPtr:x}");
            var sortFunc = Marshal.GetDelegateForFunctionPointer<SortDelegate>(sortPtr);

            fixed (int* begin = &arr[0])
            {
                sortFunc(begin, (UIntPtr)arr.Length);
            }

            Console.WriteLine($"Sorted array: [{string.Join(',', arr)}]");

            var getIntPtr = header.FindSymbol("GetInt");
            var getIntFunc = Marshal.GetDelegateForFunctionPointer<GetIntDelegate>(getIntPtr);

            for (int i = 0; i < 10; ++i)
            {
                Console.WriteLine($"Current global int: {getIntFunc()}");
            }

            var getThreadLocalIntPtr = header.FindSymbol("GetThreadLocalInt");
            var getThreadLocalIntFunc = Marshal.GetDelegateForFunctionPointer<GetIntDelegate>(getThreadLocalIntPtr);

            for (int i = 0; i < 10; ++i)
            {
                Console.WriteLine($"Current global int: {getThreadLocalIntFunc()}");
            }

            var thread = new Thread(() =>
            {
                Console.WriteLine("On second thread...");
                for (int i = 0; i < 10; ++i)
                {
                    Console.WriteLine($"Current global int: {getThreadLocalIntFunc()}");
                }
            });

            thread.Start();
            thread.Join();

            stream.Dispose();
        }

        unsafe static void Main(string[] args)
        {
            //LoadTlsLib();
            LoadCurl();
        }

        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        delegate uint curl_global_init_delegate(UIntPtr flags);

        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        delegate void curl_global_cleanup_delegate();

        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        delegate IntPtr curl_easy_init_delegate();

        // The last time I read about C#, they say that 
        // marshalling varags is not supported yet?
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        delegate uint curl_easy_setopt_delegate(IntPtr handle, uint option, [MarshalAs(UnmanagedType.LPStr)] string url);

        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        delegate uint curl_easy_perform_delegate(IntPtr handle);

        unsafe static void LoadCurl()
        {
            var stream = Assembly.GetExecutingAssembly().GetManifestResourceStream("ElfParser.test.libcurl.so.4.7.0")
                as UnmanagedMemoryStream;

            var header = new ElfHeader(stream.PositionPointer);

            header.LoadProgramHeaders();

            header.ResolveDependencies();

            header.LoadSymbols();

            header.HandleTLS();

            header.ApplyRelocations();

            header.CallInitializers();

            var curl_global_init_ptr = header.FindSymbol("curl_global_init");
            var curl_global_init = Marshal.GetDelegateForFunctionPointer<curl_global_init_delegate>(curl_global_init_ptr);

            // CURL_GLOBAL_ALL
            var result = curl_global_init((UIntPtr)((1 << 0) | (1 << 1)));

            if (result == 0)
            {
                Console.WriteLine("Successfully initialized curl.");
            }

            var curl_global_cleanup_ptr = header.FindSymbol("curl_global_cleanup");
            var curl_global_cleanup = Marshal.GetDelegateForFunctionPointer<curl_global_cleanup_delegate>(curl_global_cleanup_ptr);

            var curl_easy_init_ptr = header.FindSymbol("curl_easy_init");
            var curl_easy_init = Marshal.GetDelegateForFunctionPointer<curl_easy_init_delegate>(curl_easy_init_ptr);

            var handle = curl_easy_init();

            var curl_easy_setopt_ptr = header.FindSymbol("curl_easy_setopt");
            var curl_easy_setopt = Marshal.GetDelegateForFunctionPointer<curl_easy_setopt_delegate>(curl_easy_setopt_ptr);

            const string location = "file:///home/trung/lmao.cpp";

            result = curl_easy_setopt(handle, 10000 + 2 /*CURLOPT_URL*/, location);

            if (result == 0)
            {
                Console.WriteLine($"Set download location to: {location}");
            }
            else
            {
                Console.WriteLine($"Failed with: {result}");
            }

            var curl_easy_perform_ptr = header.FindSymbol("curl_easy_perform");
            var curl_easy_perform = Marshal.GetDelegateForFunctionPointer<curl_easy_perform_delegate>(curl_easy_perform_ptr);

            result = curl_easy_perform(handle);

            if (result != 0)
            {
                Console.WriteLine($"Failed to download: {result}");
            }

            curl_global_cleanup();

            Console.WriteLine("Curl cleaned up.");
        }
    }
}
