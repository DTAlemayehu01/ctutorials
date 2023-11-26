#ifndef GRAPH_H_
#define GRAPH_H_
#include<string>
#include<stack>
#include<queue>

struct Edge {
    vertex * v;
    int weight;
};

struct Vertex {
    std::string key;
    int distance = 0;
    bool visited = false;
    vector<edge> adj;
    vertex *previous = nullptr;
};

class Graph {
    private:
        vector<vertex*> verticies;
    public:
        Graph();
        ~Graph();
        void insertVertex(std::string key);
        void addEdge(std::string startValue, std::string endValue);
        void addEdge(std::string startValue, std::string endValue, int weight);
        void deleteVertex(std::string value);
        void deleteEdge(std::string startValue, std::string endValue);
        void displayGraph();
        void search(std::string value); //?
        void BFT(std::string keyStart);
        void BFS(std::string keyStart, std::string searchKey);
        void DFTStack(std::string keyStart);
        void DFTRecusriveHelper(vector* v);
        void DFTRecusrive(std::string keyStart);
        void dijkstraTraversal(std::string keyStart, std::string searchKey);
};
