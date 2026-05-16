#ifndef HUFFMAN_HUFFMANTREE_H
#define HUFFMAN_HUFFMANTREE_H
#include <queue>
struct Node {
    char character;
    int frequency;
    Node* left;
    Node* right;
    Node(char character, int frequency, Node* left, Node* right) {
        this->character = character;
        this->frequency = frequency;
        this->left = left;
        this->right = right;
    }
};
Node* buildHuffmanTree(int [], int);
struct Compare {
    bool operator()(Node*, Node*);
};
#endif //HUFFMAN_HUFFMANTREE_H