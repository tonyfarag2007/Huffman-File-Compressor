#ifndef HUFFMAN_BITSTREAMWRITER_H
#define HUFFMAN_BITSTREAMWRITER_H
#include <fstream>
#include <map>
void writeCompressedFile(std:: ifstream*, std::map<char, std::string>&);
#endif //HUFFMAN_BITSTREAMWRITER_H