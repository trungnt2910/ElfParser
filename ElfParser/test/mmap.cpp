#include <sys/mman.h>
#include <iostream>

int main()
{
    void* ptr = mmap((void *)0x400000, 0x1000, PROT_WRITE, PROT_EX, MAP_ANONYMOUS | MAP_PRIVATE | MAP_FIXED, -1, 0);
    std::cout << "Last error is: " << errno << std::endl;
    std::cout << "Mapped memory at: " << ptr << std::endl;
}