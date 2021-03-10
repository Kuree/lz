#include "../include/lz/lz.hh"

#include "../extern/pithy/pithy.h"

namespace lz {

std::vector<char> compress(const std::vector<char> &uncompressed, int compression_level) {
    std::vector<char> result;
    auto size = pithy_MaxCompressedLength(uncompressed.size());
    result.resize(size);
    auto *out = const_cast<char *>(result.data());
    size = pithy_Compress(uncompressed.data(), uncompressed.size(), out, size, compression_level);
    result.resize(size);
    return result;
}

std::vector<char> decompress(const std::vector<char> &compressed) {
    std::vector<char> result;
    size_t size;
    pithy_GetDecompressedLength(compressed.data(), compressed.size(), &size);
    result.resize(size);
    auto *out = const_cast<char *>(result.data());
    pithy_Decompress(compressed.data(), compressed.size(), out, result.size());
    return result;
}

}  // namespace lz
