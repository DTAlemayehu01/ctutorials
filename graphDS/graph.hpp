//#include<something>

/*Class Graph:
 * Private:
 * 	Verticies
 * 	Edges
 * Public:
 * 	insertVertex(value)
 * 	addEdge(startVal, endVal, weight)
 * 	deleteVertex(value)
 * 	deleteEdge(startVal, endVal)
 * 	displayGraph()
 * 	search(value)
 * 	traversal methods...
 */
//i don't recall if this is the correct formatting of the class or if the structs are out of the class
class Graph:
	private:
		//reminder we're using pointers here because when vectors resize themselves the memory addresses change locaation so the adjacency list would be pointing to incorrect pointers
		//it's also just generally less memory intensive/more efficient
		vector<vertex*> verticies;
	struct vertex {
		/*type*/ key;
		int distance = 0; //for bft alg weighted/distance implementation
		bool visited = false; //for breadth first traversal algorithm
		vector<edge> adj;
	};
	struct edge {
		vertex *V;
		int weight;
	};
	public:
		insertVertex(string n);
		addEdge(string v1, string v2, int _weight);
		bft(/*type*/ keyStart);

