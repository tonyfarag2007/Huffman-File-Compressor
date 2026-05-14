#ifndef HUFFMAN_HUFFMANTREE_H
#define HUFFMAN_HUFFMANTREE_H
struct Node {
    char character;
    int frequency;
    Node* left;
    Node* right;
};
void createPriorityQueue();
#endif //HUFFMAN_HUFFMANTREE_H