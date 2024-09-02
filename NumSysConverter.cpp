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

static int bits_converter(const std::string &bits, int set_of)
{
    int num = 0;

    for (int i = set_of - 1; i >= 0; i--)
    {
        
    }
}

// bin
std::string bin_to_oct(const std::string &bin)
{
    return "";
}

std::string bin_to_dec(const std::string &bin)
{
    int dec = 0;
    int length = bin.length();

    for (int i = length - 1; i >= 0; i--)
    {
        if (bin.at(i) == '0')
            continue;

        dec += (std::pow(BIN, length - (i + 1)));
    }

    return std::to_string(dec);
}

// std::string bin_to_hex(const std::string &bin)
// {
//     return "";
// }

// oct
std::string oct_to_bin(const std::string &oct)
{
    std::string bin;
    int num = std::stoi(oct);

    while (num)
    {
        bin.insert(0, std::to_string(num % BIN));
        num /= BIN;
    }

    return bin;
}

std::string oct_to_dec(const std::string &oct)
{
    int dec = 0;
    int length = oct.length();

    for (int i = length - 1; i >= 0; i--)
        dec += (char_to_int(oct.at(i)) * std::pow(OCT, length - (i + 1)));

    return std::to_string(dec);
}

// dec
std::string dec_to_bin(const std::string &num)
{
    std::string bin;
    int number = std::stoi(num);

    while (number)
    {
        bin.insert(0, std::to_string(number % BIN));
        number /= BIN;
    }

    return bin;
}

std::string dec_to_oct(const std::string &num)
{
    std::string oct;
    int number = std::stoi(num);

    while (number)
    {
        oct.insert(0, std::to_string(number % OCT));
        number /= OCT;
    }

    return '0' + oct;
}

std::string dec_to_hex(const std::string &num)
{
    std::string hex;
    int number = std::stoi(num);

    while (number)
    {
        hex.insert(0, std::to_string(number % HEX));
        number /= HEX;
    }

    return "0x" + hex;
}

// hex
