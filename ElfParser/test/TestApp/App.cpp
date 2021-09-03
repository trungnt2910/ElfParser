#include <iostream>

extern "C"
{
    void PrintSecret();
    extern thread_local std::istream& dummy;
}

#include <iostream>
#include <dlfcn.h>

int main()
{
    PrintSecret();
    auto handle = dlopen("/mnt/hgfs/D/CodingProjects/ElfParser/ElfParser/test/testApp/Lib.so", RTLD_NOW);
    // Thread local symbol
    auto sym = dlsym(handle, "dummy");
    std::cout << sym << std::endl;
    std::cout << *(size_t *)sym << std::endl;
    std::cout << &dummy << std::endl;
    return 0;
}