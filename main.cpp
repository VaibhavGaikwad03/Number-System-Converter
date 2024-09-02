#include <iostream>
#include "NumSysConverter.h"

int main()
{
    std::string s = "21";
    std::cout << dec_to_bin(s) << std::endl;
    std::cout << dec_to_oct(s) << std::endl;
    std::cout << dec_to_hex(s) << std::endl;
    // std::cout << oct_to_dec(s) << std::endl;
    std::cout << oct_to_bin(dec_to_oct(s)) << std::endl;
    std::cout << bin_to_dec("10101") << std::endl;

    return 0;
}