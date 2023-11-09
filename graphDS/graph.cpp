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
	*/
}

graph::dft(/*type*/ keystart){
	/*
	 * 1. Find key of starting vertex
	 * 2. Set vStart as "visited"
	 * 3. create a stack (S)
	 * 4. Push vStart on to S
	 * 5. Loop until S is empty
	 * 	i. n = pop;
	 * 	ii. print(n->key) //basic operation on node
	 * 	iii. loop through n's adj list in reverse order
	 * 		1) if(!n-adj[i] == visited)
	 * 			a) n->adj[i].visited = true
	 * 			b) push on to (S)
	 */
}

graph::dftRecursive(/*type*/ keystart){}

//directed graphs
graph::dijkstra(/*type*/ keystart){
	/*
	 * 1. Find vStart and mark solved
	 * 2. Add vStart to solved List (L)
	 * 3. Loop until at verticies marked
	 * 	a. set variable minDist = "infinty"
	 * 	b. Iterate through solved list(int i)
	 * 		i. iteraete through solvedlist [i] and adj list (int j)
	 * 			1) if solvedList[i]->adj[j].v not solved
	 * 				a) calculate distance from vStart
	 * 				b) if dist < minDist
	 * 					i) set dist < minDist
	 * 					ii) set minDist = dist
	 * 	c. set solved v distance to min dist
	 */
}
