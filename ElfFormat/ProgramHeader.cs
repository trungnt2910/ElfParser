using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Text;

namespace ElfFormat
{
    [StructLayout(LayoutKind.Sequential)]
    public unsafe struct ProgramHeader
    {
        public SegmentType Type;
        public SegmentFlags Flags;
        public ulong Offset;
        public ulong VirtualAddress;
        public ulong PhysicalAddress;
        public ulong FileSize;
        public ulong MemSize;
        public ulong Align;

        public Span<byte> GetData(byte* begin)
        {
            return new Span<byte>(begin + Offset, (int)FileSize);
        }
        
        public Span<DynamicEntry> GetDynamicEntries(void* begin)
        {
            if (Type != SegmentType.Dynamic)
            {
                throw new InvalidOperationException("Only valid for Dynamic Program Headers");
            }
            return new Span<DynamicEntry>((byte *)begin + Offset, (int)FileSize);
        }
    }
}
