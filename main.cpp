#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "HuffmanTree.h"
#include "FrequencyCodes.h"
#include "BitStreamWriter.h"
#include <map>
int main() {
    int frequency[256] = {0};
    std::ifstream file("C:\\Users\\tonyw\\Downloads\\TicTacToeProject\\stats.txt", std::ios_base::binary);
    char ch;
    std::map<char, std::string> frequencyCodes;
    if (file.is_open()) {
        while (file.get(ch)) {
            frequency[static_cast<unsigned char>(ch)]++;
        }
    }
    std::ifstream inputFile("C:\\Users\\tonyw\\Downloads\\TicTacToeProject\\stats.txt", std::ios_base::binary);
    generateCodes(buildHuffmanTree(frequency, 256), "", frequencyCodes);
    writeCompressedFile(&inputFile, frequencyCodes);
}