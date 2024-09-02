#ifndef NUM_SYS_CONVERTER
#define NUM_SYS_CONVERTER

#include <string>

#define BIN 2
#define OCT 8
#define HEX 16

static int char_to_int(const char &c);
static int bits_converter(const std::string &bits, int set_of);

std::string bin_to_oct(const std::string &bin);
std::string bin_to_dec(const std::string &bin);
std::string bin_to_hex(const std::string &bin);

std::string oct_to_bin(const std::string &oct);
std::string oct_to_dec(const std::string &oct);
std::string oct_to_hex(const std::string &oct);

std::string dec_to_bin(const std::string &dec); //.
std::string dec_to_oct(const std::string &dec); //.
std::string dec_to_hex(const std::string &dec); //.

std::string hex_to_bin(const std::string &hex);
std::string hex_to_oct(const std::string &hex);
std::string hex_to_dec(const std::string &hex);

#endif // NUM_SYS_CONVERTER