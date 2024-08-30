#include <iostream>
#include "NumSysConverter.h"

int main()
{
    std::string s = "21";
    std::cout << dec_to_bin(s) << std::endl;
    std::cout << dec_to_oct(s) << std::endl;
    std::cout << dec_to_hex(s) << std::endl;

    return 0;
}