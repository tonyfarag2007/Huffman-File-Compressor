#include <iostream>
#include <string>
#include <queue>
struct Node {
    char character;
    int frequency;
    Node* left;
    Node* right;
};
void createPriorityQueue() {
    std::priority_queue<int> pq;

}