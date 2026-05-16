#ifndef HUFFMAN_HUFFMANTREE_H
#define HUFFMAN_HUFFMANTREE_H
#include <queue>
class Node {
public:
    char character;
    int frequency;
    Node* left;
    Node* right;
    Node(char character, int frequency, Node* left, Node* right);
    Node(int frequency, Node* left, Node* right);
};
Node* buildHuffmanTree(int [], int);
struct Compare {
    bool operator()(Node*, Node*);
};
#endif //HUFFMAN_HUFFMANTREE_H