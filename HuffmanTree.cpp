#include <iostream>
#include <queue>
#include <vector>
#include <map>
struct Node {
    char character;
    int frequency;
    Node* left;
    Node* right;
};
std::vector<Node> buildLeafNodes(int frequency[], int size) {
    std::priority_queue<int> pq;
    std::vector<Node> leafNodes;
    for (int i = 0; i < size; i++) {
        if (frequency[i] > 0) {
            pq.push(frequency[i]);
            leafNodes.push_back({static_cast<char>(i), frequency[i], nullptr, nullptr});
        }
    }
    for (int i = 0; i < leafNodes.size(); i++) {
        std::cout << leafNodes[i].character << " ";
    }
    return leafNodes;
}