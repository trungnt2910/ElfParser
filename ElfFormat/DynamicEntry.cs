using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Text;

namespace ElfFormat
{
    [StructLayout(LayoutKind.Sequential)]
    public struct DynamicEntry
    {
        [StructLayout(LayoutKind.Explicit)]
        public struct Union_
        {
            [FieldOffset(0)]
            public long Val;
            [FieldOffset(0)]
            public IntPtr Ptr;
        }

        public DynamicTag Tag;
        public Union_ Union;

        public override string ToString()
        {
            return $"DynamicEntry: Tag={Tag}, Value=0x{Union.Val:x}";
        }
    }
}
