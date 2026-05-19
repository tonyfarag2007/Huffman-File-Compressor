#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include "HuffmanTree.h"
#include "FrequencyCodes.h"
#include "BitStreamWriter.h"
#include <map>

int main() {
    int frequency[256] = {0};
    std::filesystem::path originalFilePath;
    std::cout << "Enter the path to the file: ";
    std::cin >> originalFilePath;
    std::string fileExtension = originalFilePath.extension().string();
    std::ifstream file(originalFilePath, std::ios_base::binary);
    std::filesystem::path compressedFilePath = originalFilePath.parent_path().string() + "\\" + originalFilePath.stem().string() + "(compressed)";
    compressedFilePath.replace_extension(".huff");
    char ch;
    int chCount = 0;
    std::map<char, std::string> frequencyCodes;
    if (file.is_open()) {
        while (file.get(ch)) {
            frequency[static_cast<unsigned char>(ch)]++;
            if (frequency[static_cast<unsigned char>(ch)]>0) {
                chCount++;
            }
        }
    }
    file.clear();
    file.seekg(0, std::ios::beg);
    generateCodes(buildHuffmanTree(frequency, 256), "", frequencyCodes);
    writeCompressedFile(&file, compressedFilePath.string(),frequencyCodes,
        originalFilePath.extension().string(), frequency, 256, chCount);
    std::cout << "File Size: "<< std::filesystem::file_size(originalFilePath) << " bytes" << std::endl;
    std::cout << "Compressed File Size: " << std::filesystem::file_size(compressedFilePath) << " bytes" << std::endl;
    std::cout << "That is a " << 100.0 - (static_cast<double>(std::filesystem::file_size(compressedFilePath)) /
        static_cast<double>(std::filesystem::file_size(originalFilePath)) * 100) << "% decrease!" <<std::endl;
    file.close();
    return 0;
}