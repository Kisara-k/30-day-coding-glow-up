#include <iostream>
#include <vector>
using namespace std;

class Graph {

    private:

    struct Node {
        int label;
        vector<int> neighbours;
    };
    // Graph will have an array of type "Node" with length specified by n
    int length = 8;
    Node *nodes = new Node[length];

    public:

    void initializeNodes() {
        // iterate through the nodes and assign labels
        for (int i = 0; i < length; i++) {
            nodes[i].label = i + 1;
        }
    }

    void addEdge(int u, int v) {
        nodes[u - 1].neighbours.push_back(v);
        nodes[v - 1].neighbours.push_back(u);
    }

    void print() {
        // Iterate through each node and print its neighbours
        for (int i = 0; i < length; i++) {
            cout << nodes[i].label << "-->";
            for (auto nd : nodes[i].neighbours) {
                cout << nd << " ";
            }
            cout << "\n";
        }
    }
};