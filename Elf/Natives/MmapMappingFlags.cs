using System;

namespace Elf.Natives
{
    [Flags]
    public enum MmapMappingFlags
    {
        Private = 0x02,
        Fixed = 0x10,
        Anonymous = 0x20,
    }
}