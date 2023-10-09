struct Node{
	type key;
	Node *leftChild;
	Node *rightChild;
};

struct Node{
	type key;
	Node *parent;
	Node *leftChild;
	Node *rightChild;
};

class BST{
	private:
			Node root
			Node insertHelper(Node, value)
			Node deleteHelper(Node, value)
			Node deleteHelper(Node, value)

			Node getMinValue(Node)
			Node getMaxValue(Node)

			void destroySubtree(Node)
	public:
			init()
			insert(value)
			search(value)
			delete(value)
};
