using Elf.Natives;
using System;
using System.Collections.Generic;
using System.Text;

namespace Elf
{
    public unsafe class ElfDynamicSectionArray : ElfManagedArray<ElfDynamicSectionItemNative, ElfDynamicSectionItem>
    {
        // A null ElfDynamicSectionItem marks the end of the array.
        public ElfDynamicSectionArray(byte* data, ulong offset) : base(data, offset, 0)
        {
            _count = 0;
            while (this[_count].Tag != ElfDynamicSectionItemType.Null)
            {
                ++_count;
            }

            // Allows accessing the last element.
            ++_count;
        }

        protected override ElfDynamicSectionItem Construct(void* ptr)
        {
            return new ElfDynamicSectionItem(_memory, (ElfDynamicSectionItemNative*)ptr);
        }
    }
}
