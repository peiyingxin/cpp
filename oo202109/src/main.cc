#include <string>
#include <iostream>

#include "message.h"

int main()
{
    Message m1("Hello cmake world");
    std::cout << m1 << std::endl;
    std::cout << std::string("hello world!") << std::endl;
    return 0;
}