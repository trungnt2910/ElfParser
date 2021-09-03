#include <iostream>

#include <dlfcn.h>
#include <link.h>

extern "C"
{
    extern void _rtld_global();
    extern void _dl_get_tls_static_info(size_t * s1, size_t * s2);
}

int main()
{
    size_t s1;
    size_t s2;
    _dl_get_tls_static_info(&s1, &s2);

    std::cout << s1 << " " << s2 << std::endl;

    std::cout << "Address of _rtld_global: " << (void *)(_rtld_global) << std::endl;
    
    auto handle = dlopen("libdl.so", RTLD_NOW);
    std::cout << handle << std::endl;
    auto symbol = dlsym(handle, "_rtld_global");

    std::cout << "Symbol of _rtld_global in shared object: " << symbol << std::endl;

    auto currentLink = (link_map *)handle;

    while (currentLink->l_prev != nullptr)
    {
        currentLink = currentLink->l_prev;
    }

    while (currentLink)
    {
        std::cout << "Library:" << std::endl;
        std::cout << currentLink->l_addr << std::endl;
        std::cout << currentLink->l_name << std::endl;
        currentLink = currentLink->l_next;
    }

    return 0;
}