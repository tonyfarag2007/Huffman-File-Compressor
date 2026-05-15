#include <iostream>
#include <queue>
#include <vector>
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
struct Compare {
    bool operator()(Node* a, Node* b) {
        return a->frequency > b->frequency;
    }
};
std::priority_queue<Node*, std::vector<Node*>, Compare> buildLeafNodes(int frequency[], int size) {
    std::priority_queue<Node*, std::vector<Node*>, Compare> pq;
    for (int i = 0; i < size; i++) {
        if (frequency[i] > 0) {
            Node *node = new Node(static_cast<char>(i), frequency[i], nullptr, nullptr);
            pq.push(node);
        }
    }
    return pq;
}
