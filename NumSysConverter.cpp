#include <cmath>
#include <iostream>
#include <algorithm>
#include "NumSysConverter.h"

static int char_to_int(const char &c)
{
    if ((c >= '0') && (c <= '9'))
        return (c - '0');
    else
        return -1;
}

// bin
std::string bin_to_oct(const std::string &bin)
{
    return "";
}

std::string bin_to_dec(const std::string &bin)
{
    return "";
}

std::string bin_to_hex(const std::string &bin)
{
    return "";
}

// oct
std::string oct_to_bin(const std::string &oct)
{
    std::string bin;
    int num = std::stoi(oct);

    while (num)
    {
        bin.insert(0, std::to_string(num % BIN_BASE));
        num /= BIN_BASE;
    }

    return bin;
}

std::string oct_to_dec(std::string &oct)
{
    int dec = 0;
    int length = oct.length();
    std::reverse(oct.begin(), oct.end());

    for (int i = 0; i < length; i++)
        dec += (char_to_int(oct.at(i)) * std::pow(OCT_BASE, i));

    return std::to_string(dec);
}

// dec
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
    std::string oct;
    int number = std::stoi(num);

    while (number)
    {
        oct.insert(0, std::to_string(number % OCT_BASE));
        number /= OCT_BASE;
    }

    return oct;
}

std::string dec_to_hex(const std::string &num)
{
    std::string hex;
    int number = std::stoi(num);

    while (number)
    {
        hex.insert(0, std::to_string(number % HEX_BASE));
        number /= HEX_BASE;
    }

    return hex;
}

// hex
