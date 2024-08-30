#ifndef NUM_SYS_CONVERTER
#define NUM_SYS_CONVERTER

#include <string>

#define BIN_BASE 2
#define OCT_BASE 8
#define HEX_BASE 16

std::string dec_to_bin(const std::string &num);
std::string dec_to_oct(const std::string &num);
std::string dec_to_hex(const std::string &num);

std::string bin_to_oct(const std::string &bin);
std::string bin_to_dec(const std::string &bin);
std::string bin_to_hex(const std::string &bin);

#endif // NUM_SYS_CONVERTER