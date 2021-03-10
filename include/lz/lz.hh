#ifndef LZ_LZ_HH
#define LZ_LZ_HH

#include <vector>

namespace lz {
// C++ helper functions
std::vector<char> compress(const std::vector<char> &uncompressed, int compression_level);

std::vector<char> decompress(const std::vector<char> &compressed);

}  // namespace lz

#endif  // LZ_LZ_HH
