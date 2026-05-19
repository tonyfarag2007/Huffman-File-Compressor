#ifndef HUFFMAN_BITSTREAMWRITER_H
#define HUFFMAN_BITSTREAMWRITER_H
#include <fstream>
#include <map>
#include <string>
void writeHeader(std::ofstream&, std::string, int [], int, int);
void writeCompressedFile(std:: ifstream*, std::string,
    std::map<char, std::string>&, std::string, int [], int, int);
#endif //HUFFMAN_BITSTREAMWRITER_H