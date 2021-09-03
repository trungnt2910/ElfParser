using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Text;

namespace Elf.Natives
{
    [StructLayout(LayoutKind.Sequential)]
    public struct ElfRelaNative
    {
        public UIntPtr Offset;
        public UIntPtr Info;
        public IntPtr Addend;
    }
}
