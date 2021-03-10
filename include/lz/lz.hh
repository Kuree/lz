#ifndef LZ_LZ_HH
#define LZ_LZ_HH

#include <vector>

// C++ helper functions
std::vector<char> compress(const std::vector<char> &uncompressed,
                           int compression_level);

std::vector<char> decompress(const std::vector<char> &compressed);

#endif // LZ_LZ_HH
