#include "graph.hpp"

void Graph::addVertex(std::string key) {
    int size = verticies.size();
    for(int i = 0; i < size; i++) {
        if(verticies[i]->key == key) {
            return;
        }
    }
    vertex *newVertex = new vertex;
    newVertex->key = key;
    verticies.push_back(newVertex);
}

void Graph::addEdge(std::string startValue, std::string endValue) {
    vertex* start = nullptr;
    vertex* end = nullptr;
    int size = verticies.size();
    for(int i = 0; i < size; i++){
        if(verticies[i]->key == startValue) {
            start = verticies[i];
        }
        if(verticies[i]->key == endValue) {
            end = verticies[i];
        }
    }
    if(!start || !end) {
        return;
    }
    if(start == end) {
        return;
    }
    Edge startToEnd;
    startToEnd.v = end;
    start->adj.push_back(startToEnd);
}

void Graph::addEdge(std::string startValue, std::string endValue, int weight) {
    vertex* start = nullptr;
    vertex* end = nullptr;
    int size = verticies.size();
    for(int i = 0; i < size; i++){
        if(verticies[i]->key == startValue) {
            start = verticies[i];
        }
        if(verticies[i]->key == endValue) {
            end = verticies[i];
        }
    }
    if(!start || !end) {
        return;
    }
    if(start == end) {
        return;
    }
    Edge startToEnd;
    startToEnd.v = end;
    startToEnd.weight = weight;
    start->adj.push_back(startToEnd);
}

void Graph::displayGraph(){
    int sizeVs = verticies.size();
    int size = 0;
    for(int i = 0; i < sizeVs; i++){
        std::cout << verticies[i]->key << " ";
        size = verticies[i]->adj.size();
        for(int j = 0; j < size; j++) {
            std::cout << verticies[i]->adj[j].v->key << " ";
        }
        std::cout << std:endl;
    }
}

void Graph::BFT(std::string keyStart){
    vertex* vStart;
    vertex* pop;
    int size = verticies.size();

    for(int i = 0; i < size; i++){
        verticies[i]->visited = false;
        verticies[i]->distance = 0;
    }

    for(int i = 0; i < size; i++) {
        if(verticies[i]->key == keyStart) {
            vStart = verticies[i];
            break;
        }
    }

    queue<vertex*> Q;
    Q.push(vStart);

    vStart->visited = true;

    while(Q.size()) {
        pop = Q.front();
        Q.pop();
        if(!pop->visited) {
            pop->visited = true;
        }
        size = pop->adj.size();
        for(int i = 0; i < size; i++) {
            if(!pop->adj[i].v->visited) {
                Q.push(pop->adj[i].v);
                pop->adj[i].v->previous = pop;
                pop->adj[i].v->distance = pop->distance+1;
            }
        }
    }
}

void Graph::BFS(std::string keyStart, std::string searchKey){
    vertex* vStart;
    vertex* vDest;
    vertex* pop;
    int size = verticies.size();

    for(int i = 0; i < size; i++){
        verticies[i]->visited = false;
        verticies[i]->distance = 0;
    }

    for(int i = 0; i < size; i++) {
        if(verticies[i]->key == keyStart) {
            vStart = verticies[i];
        }
        if(verticies[i]->key == searchKey) {
            vDest = verticies[i];
        }
    }

    queue<vertex*> Q;
    Q.push(vStart);

    vStart->visited = true;

    while(Q.size()) {
        pop = Q.front();
        Q.pop();
        if(!pop->visited) {
            pop->visited = true;
        }
        size = pop->adj.size();
        for(int i = 0; i < size; i++) {
            if(!pop->adj[i].v->visited) {
                Q.push(pop->adj[i].v);
                pop->adj[i].v->previous = pop;
                pop->adj[i].v->distance = pop->distance+1;
            }
        }
        if(pop == vDest){
            break;
        }
    }
    if(!vDest->visited){
        std::cout << "No path from start to end" << std::endl;
    }

    vertex* crawler = pop;
    while(crawler) {
        crawler = crawler->previous;
    }
}

void Graph::DFTStack(std::string keyStart){
    vertex* vStart;
    vertex* pop;
    int size = verticies.size();

    for(int i = 0; i < size; i++){
        verticies[i]->visited = false;
        verticies[i]->distance = 0;
    }

    for(int i = 0; i < size; i++) {
        if(verticies[i]->key == keyStart) {
            vStart = verticies[i];
            break;
        }
    }

    if(!vStart){
        return;
    }

    stack<vertex*> s;
    s.push(vStart);

    vStart->visited = true;

    while(s.size()) {
        pop = s.front();
        s.pop();
        if(!pop->visited) {
            pop->visited = true;
        }
        size = pop->adj.size();
        for(int i = 0; i < size; i++) {
            if(!pop->adj[i].v->visited) {
                s.push(pop->adj[i].v);
                pop->adj[i].v->previous = pop;
                pop->adj[i].v->distance = pop->distance+1;
            }
        }
    }
}

void Graph::DFTRecursiveHelper(vertex* v){
    v->visited = true;
    int adjSize = v->adj.size();
    for(int i = 0; i < adjSize; i++){
        if(!v->adj[i]->visited){
            depthFirstRecurse(v->adj[i]);
        }
    }
}

void Graph::DFTRecursive(std::string keyStart){
    int size = verticies.size();
    vertex* vStart;
    for(int i = 0; i < size; i++){
        if(verticies[i]->key == keystart){
            vStart = verticies[i];
            break;
        }
    }
    DFTRecursiveHelper(vStart);
}

void Graph::dijsktraTraversal(std::string keyStart, std::string searchKey){
    vertex* vStart;
    int minDist;
    int size = verticies.size();
    int adjSize;
    bool allSolved = false;

    for(int i = 0; i < size; i++){
        verticies[i]->visited = false;
        verticies[i]->distance = 0;
    }

    for(int i = 0; i < size; i++) {
        if(verticies[i]->key == keyStart) {
            vStart = verticies[i];
        }
    }

    if(!vStart){
        return;
    }

    vector<vertex*> solvedList;
    solvedList.push_back(vStart);

    vStart->visited = true;
    while(!allSolved){
        minDist = 99999999999;

        vertex *solvedV = nullptr;
        allSolved = true;

        size = solvedList.size();
        for(int i = 0; i < solvedList; i++){
            vector *s = solvedList[i];

            adjSize = s->adj.size();
            for(int j=0; j < adjSize; j++){
                if(!s->adj[j].v->solve){
                    int dist = s->distance + s->adj[j].weight;

                    if(dist < minDist){
                        solvedV = s->adj[j].v;
                        minDist = dist;
                    }
                    allSolved = false;
                }
            }
        }
        if(!allSolved){
            solvedV->distance = minDist;
            solvedV->solved = true;
            solvedList.push_back(solvedV);
        }
    }
}
