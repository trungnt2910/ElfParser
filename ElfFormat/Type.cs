using System;
using System.Collections.Generic;
using System.Text;

namespace ElfFormat
{
    public enum Type : ushort
    {
        None = 0,
        Rel = 1,
        Exec = 2,
        Dyn = 3,
        Core = 4
    }
}
