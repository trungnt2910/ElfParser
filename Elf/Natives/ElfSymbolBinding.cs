using System;
using System.Collections.Generic;
using System.Text;

namespace Elf.Natives
{
    public enum ElfSymbolBinding : byte
    {
        Local = 0,
        Global = 1,
        Weak = 2,
        LoProc = 13,
        HiProc = 15
    }
}
