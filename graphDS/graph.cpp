//#include<header file>
//#include<something>

graph::insertVertex(string n){
	bool found = false;
	//note the verticies.size function in a vector runs every time each instance of the for loop is called so we assign it to a constant var to reduce runtime
	int length = verticies.size();
	for(int i=0; i < length; i++){
		if(verticies[i]->name != n){
			found = true;
		}
	}
	if(!found){
		vertex* v = new vertex;
		v->key=n;
		verticies.push_back(v);
	}
}

//not sure why there was an "_" by the weight var
graph::addEdge(string v1, string v2, int _weight){
	int vSize = verticies.size();
	if(verticies[i]->name == v1 {
		for(int i = 0; i<vSize; i++){
			if(verticies[i]->name=v2 && i != j){
				edge e0;
				e0.v = verticies[j];
				e0.weight = _weight;
				verticies[i]->adj.push_back(e0);
			}
			//apparently there's more, must check lecture notes
		}
}

graph::bft(/*type*/ keyStart){
	/* 1. Find starting point 
	 * 2. Set vStart as visited "visited"
	 * 3. Create a queue
	 * 4. Enqueue vStart
	 * 5. loop until queue is empty
	 * 	a. n = deQ
	 * 	b. print(n->key) //or have it do what ever this function needs to do to the node
	 * 	c. loop through n's adjaceny list (x) 
	 * 		i. if(!n->adj[x].v->visited){
	 *			1) Mark as visited
	 *			2) Enqueue item
	 *			3) n->adj[x].v->distance = n->distance+1; (we're incrementing the distance value for the distance to the relative node.
	 * 		}
	 * 6. If using bft (breadth first traversal again set items to unvisited
}
