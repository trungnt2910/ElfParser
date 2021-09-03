using System;
using System.Runtime.InteropServices;

namespace ElfFormat
{
    [StructLayout(LayoutKind.Sequential)]
    public unsafe struct ElfHeader
    {
        public fixed byte Magic[4];
        public byte Class;
        public byte Endian;
        public byte Version;
        public byte OS_ABI;

        public fixed byte Padding[8];

        public FileInfo FileInfo;

        public ulong EntryPoint;
        
        public ulong ProgramHeaderOffset;

        public ulong SectionHeaderOffset;

        public uint Flags;
        public ushort HeaderSize;
        public ushort ProgramHeaderEntrySize;

        public ushort ProgramHeaderEntryCount;
        public ushort SectionHeaderEntrySize;
        public ushort SectionHeaderEntryCount;
        public ushort IndexOfEntryWithSectionNames;
    }

    [StructLayout(LayoutKind.Sequential)]
    public unsafe struct FileInfo
    {
        public Type Type;
        public Machine Machine;
        public uint Version;
    }
}
