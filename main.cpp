#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "HuffmanTree.h"
#include <map>
int main() {
    int frequency[256] = {0};
    std::ifstream file("C:\\Users\\tonyw\\Downloads\\TicTacToeProject\\stats.txt", std::ios_base::binary);
    char ch;
    if (file.is_open()) {
        while (file.get(ch)) {
            frequency[static_cast<unsigned char>(ch)]++;
        }
    }

    buildLeafNodes(frequency, 256);
}