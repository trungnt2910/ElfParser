#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <random>

std::random_device rd;

int GetStupidInt()
{
    printf("Getting stupid int...\n");
    int stupid = std::uniform_int_distribution<int>(0, 100)(rd);
    printf("Stupid int: %i\n", stupid);
    return stupid;
}

// #define thread_local

int global = GetStupidInt();
thread_local int threadLocal = 0;
thread_local int dummy = 0;

extern "C"
{
    void PrintSecret()
    {
        std::cout << "This is a secret string!" << std::endl;
    }

    void Sort(int32_t * begin, size_t count)
    {
        return std::sort(begin, begin + count);
    }

    int GetInt()
    {
        return global++;
    }

    int GetThreadLocalInt()
    {
        std::cout << "Address: " << &threadLocal << std::endl;
        return threadLocal++ + dummy;
    }
}