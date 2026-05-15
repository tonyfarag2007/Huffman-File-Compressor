#ifndef HUFFMAN_HUFFMANTREE_H
#define HUFFMAN_HUFFMANTREE_H
#include <queue>
struct Node {
    char character;
    int frequency;
    Node* left;
    Node* right;
};
std::vector<Node> buildLeafNodes(int [], int);
#endif //HUFFMAN_HUFFMANTREE_H