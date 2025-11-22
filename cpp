#ifndef AES_H
#define AES_H

#include <vector>
#include <string>

namespace CryptoToolkit {

class AES256 {
public:
    static std::vector<unsigned char> generate_key();
    static std::vector<unsigned char> generate_iv();

    static bool encrypt_file(const std::string& inputPath,
                             const std::string& outputPath,
                             const std::vector<unsigned char>& key,
                             const std::vector<unsigned char>& iv);

    static bool decrypt_file(const std::string& inputPath,
                             const std::string& outputPath,
                             const std::vector<unsigned char>& key,
                             const std::vector<unsigned char>& iv);

    static std::vector<unsigned char> encrypt_buffer(const std::vector<unsigned char>& plaintext,
                                                     const std::vector<unsigned char>& key,
                                                     const std::vector<unsigned char>& iv);

    static std::vector<unsigned char> decrypt_buffer(const std::vector<unsigned char>& ciphertext,
                                                     const std::vector<unsigned char>& key,
                                                     const std::vector<unsigned char>& iv);
};

}

#endif
