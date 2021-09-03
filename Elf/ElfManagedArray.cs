﻿using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Text;

namespace Elf
{
    public abstract unsafe class ElfManagedArray<TNative, TManaged> : IEnumerable, IEnumerable<TManaged>
        where TNative: struct
    {
        private static readonly ulong _nativeSize = (ulong)Marshal.SizeOf<TNative>();

        protected byte* _memory;
        protected byte* _first;
        protected ulong _count;

        public ElfManagedArray(byte* data, ulong offset, ulong count)
        {
            _memory = data;
            _first = data + offset;
            _count = count;
        }

        public TManaged this[ulong index]
        {
            get
            {
                if (index > _count)
                {
                    throw new IndexOutOfRangeException($"{index} is greater than array range {_count}");
                }

                return Construct(_first + index * _nativeSize);
            }
        }

        public ulong Count => _count;

        public IEnumerator<TManaged> GetEnumerator()
        {
            for (ulong i = 0; i < _count; ++i)
            {
                yield return this[i];
            }
        }

        IEnumerator IEnumerable.GetEnumerator()
        {
            for (ulong i = 0; i < _count; ++i)
            {
                yield return this[i];
            }
        }

        protected abstract TManaged Construct(void* ptr);
    }
}
