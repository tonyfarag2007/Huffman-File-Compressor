#include <queue>
#include <vector>
#include "HuffmanTree.h"
Node::Node(char character, int frequency, Node* left, Node* right) {
    this->character = character;
    this->frequency = frequency;
    this->left = left;
    this->right = right;

}
Node::Node(int frequency, Node* left, Node* right) {
    this->frequency = frequency;
    this->left = left;
    this->right = right;
}
Node::~Node() {
    delete left;
    delete right;
}
bool Compare::operator()(Node* a, Node* b) {
    return a -> frequency > b -> frequency;
}

Node* buildHuffmanTree(std::vector<int> frequency, int size) {
    std::priority_queue<Node*, std::vector<Node*>, Compare> pq;
    for (int i = 0; i < size; i++) {
        if (frequency[i] > 0) {
            Node *node = new Node(static_cast<char>(i), frequency[i], nullptr, nullptr);
            pq.push(node);
        }
    }
    while (pq.size() > 1) {
        Node *nodeRight = pq.top();
        pq.pop();
        Node *nodeLeft = pq.top();
        pq.pop();
        Node *node1 = new Node(nodeRight->frequency + nodeLeft->frequency, nodeLeft, nodeRight);
        pq.push(node1);
    }
    return pq.top();
}