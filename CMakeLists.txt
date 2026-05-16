cmake_minimum_required(VERSION 3.20)
project(Huffman CXX)

set(CMAKE_CXX_STANDARD 17)

add_executable(Huffman main.cpp
        HuffmanTree.cpp
        HuffmanTree.h
        FrequencyCodes.cpp
        FrequencyCodes.h
        BitStreamWriter.cpp
        BitStreamWriter.h
)
