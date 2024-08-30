#include "NumSysConverter.h"
#include <iostream>
#include <algorithm>

std::string dec_to_bin(const std::string &num)
{
    std::string bin;
    int number = std::stoi(num);

    while (number)
    {
        bin.insert(0, std::to_string(number % BIN_BASE));
        number /= BIN_BASE;
    }

    return bin;
}

std::string dec_to_oct(const std::string &num)
{
    std::string bin;
    int number = std::stoi(num);

    while (number)
    {
        bin.insert(0, std::to_string(number % OCT_BASE));
        number /= OCT_BASE;
    }

    return bin;
}

std::string dec_to_hex(const std::string &num)
{
    std::string bin;
    int number = std::stoi(num);

    while (number)
    {
        bin.insert(0, std::to_string(number % HEX_BASE));
        number /= HEX_BASE;
    }

    return bin;
}

std::string bin_to_oct(const std::string &bin)
{
    std::string dec;
    
}

std::string bin_to_dec(const std::string &bin)
{
}

std::string bin_to_hex(const std::string &bin)
{
}
