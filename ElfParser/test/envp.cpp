#include <iostream>

int main(int argc, char** argv, char** envp)
{
    while (*envp != nullptr)
    {
        std::cout << *envp << std::endl;
        ++envp;
    }
}