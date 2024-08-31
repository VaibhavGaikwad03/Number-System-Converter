#include <iostream>
#include "NumSysConverter.h"

int main()
{
    std::string s = "25";
    std::cout << dec_to_bin(s) << std::endl;
    std::cout << dec_to_oct(s) << std::endl;
    std::cout << dec_to_hex(s) << std::endl;
    std::cout << oct_to_dec(s) << std::endl;
    
    return 0;
}