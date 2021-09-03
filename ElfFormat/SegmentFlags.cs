using System;
using System.Collections.Generic;
using System.Text;

namespace ElfFormat
{
    [Flags]
    public enum SegmentFlags : uint
    {
        Execute = 0x1,
        Write = 0x2,
        Read = 0x4,
    }
}
