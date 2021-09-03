using System;
using System.Collections.Generic;
using System.Text;

namespace ElfFormat
{
    public enum SegmentType : uint
    {
        Null = 0,
        Load = 1,
        Dynamic = 2,
        Interp = 3,
        Note = 4,
        ShLib = 0x5,
        PHdr = 0x6,
        TLS = 0x7,
        LoOS = 0x6000_0000,
        HiOS = 0x6FFF_FFFF,
        LoProc = 0x7000_0000,
        HiProc = 0x7FFF_FFFF,
        GnuEhFrame = 0x6474_E550,
        GnuStack = 0x6474_E551,
        GnuRelRo = 0x6474_E552,
        GnuProperty = 0x6474_E553,
    }
}
