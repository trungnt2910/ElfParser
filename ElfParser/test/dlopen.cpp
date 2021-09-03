#include <iostream>
#include <dlfcn.h>

int main()
{
    auto handle = dlopen("libc.so.6", RTLD_LAZY);
    std::cout << "Libstdc++ is at " << handle << std::endl;
    std::cout << "Symbol __gmon_start__ is at " << dlsym(handle, "__gmon_start__") << std::endl;
}