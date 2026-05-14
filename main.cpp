#include <iostream>
#include <fstream>
#include <string>
int main() {
    int frequency[256] = {0};
    std::ifstream file("C:\\Users\\tonyw\\Downloads\\TicTacToeProject\\stats.txt", std::ios_base::binary);
    char ch;
    if (file.is_open()) {
        while (file.get(ch)) {
            frequency[(unsigned char)ch]++;
        }
        for (int i = 0; i < std::size(frequency); i++) {
            std::cout << (unsigned char)i << ": " << frequency[i] << std::endl;
        }
    }

}