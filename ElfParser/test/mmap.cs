// using System;
// using System.Runtime.InteropServices;

// namespace Retard
// {
//     public static class Program
//     {
//         [DllImport("libc.so.6")]
//         public static extern IntPtr mmap(IntPtr addr, UIntPtr length, int protectionFlags, int mappingFlags, int fileDescriptor, int offset);

//         public static void Main()
//         {
//             Console.WriteLine($"{(ulong)mmap((IntPtr)0x400000, (UIntPtr)0x1000, 0, 0x20 | 0x02 | 0x10, -1, 0):x}");
//         }
//     }
// }