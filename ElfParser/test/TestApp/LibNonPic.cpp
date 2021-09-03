#include <cstdio>

extern "C"
{
    void Greet(const char * ptr)
    {
        printf("Hello, %s", ptr);
    }
}