# Number System Converter

## Overview
The Number System Converter is a C++ library that allows you to convert numbers between various number systems: Binary (BIN), Octal (OCT), Decimal (DEC), and Hexadecimal (HEX). It provides a set of functions to easily switch between these number systems, making it a handy tool for software developers, students, or anyone interested in number theory and computer science.

## Features
- Convert binary numbers to octal, decimal, and hexadecimal.
- Convert octal numbers to binary and decimal.
- Convert decimal numbers to binary, octal, and hexadecimal.
- Convert hexadecimal numbers to binary and decimal.
- Simple and efficient algorithms to perform the conversions.

## Usage

### Conversion Functions

- **Binary to Other Systems:**
  - `std::string bin_to_oct(const std::string &bin);`
  - `std::string bin_to_dec(const std::string &bin);`
  - `std::string bin_to_hex(const std::string &bin);`
  
- **Octal to Other Systems:**
  - `std::string oct_to_bin(const std::string &oct);`
  - `std::string oct_to_dec(const std::string &oct);`
  
- **Decimal to Other Systems:**
  - `std::string dec_to_bin(const std::string &dec);`
  - `std::string dec_to_oct(const std::string &dec);`
  - `std::string dec_to_hex(const std::string &dec);`
  
- **Hexadecimal to Other Systems:**
  - **(Implement your own functions for hex to binary, octal, and decimal as needed)**

### Example

```cpp
#include <iostream>
#include "NumSysConverter.h"

int main() {
    std::string binary = "101010";
    std::string octal = bin_to_oct(binary);
    std::string decimal = bin_to_dec(binary);
    std::string hex = bin_to_hex(binary);

    std::cout << "Binary: " << binary << std::endl;
    std::cout << "Octal: " << octal << std::endl;
    std::cout << "Decimal: " << decimal << std::endl;
    std::cout << "Hexadecimal: " << hex << std::endl;

    return 0;
}
