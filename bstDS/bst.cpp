//we're segmenting functions as to prevent users from accessing private data
//for example we can assign root using our private function and public function but the user can't because they only have access to public functions

//Destructor
BST::~BST(){
	destorySubTree(root);
	root = nullptr;
}

void BST::destroySubTree(Node *currNode){
	if(currNode!=nullptr){
		destroySubTree(currNode->left);
		destroySubTree(currNode->right);
		delete currNode;
	}
}

//Node Deletion, note to make sure when deleting that our bst remains valid
//This is more so a swapping of values than actualy node deletion there is an example of actual deletion below
void BST::deleteKey(int key){
	root = deleteNodeHelper(root, key);
}

Node* BST::deleteNodeHelper(root, key){
	if(currNode == nullptr){
		//end branch or empty tree
		return nullptr;
	} else if (value < currNode) {
		currNode->left = deleteNodeHelper(currNode->left, value);
	} else if (value > currNode) {
		currNode->right = deleteNodeHelper(currNode->right, value);
	} else {
		//node found
		if(root->left == nullptr && root->right == nullptr){ //node has no children
			delete root;
			return nullptr;
		} else if (root->left == nullptr && root->right != nullptr) { //node has right child
			Node* p_Right = root->right;
			delete root;
			return p_Right;
		} else if (root->left != nullptr && root->right == nullptr) { //node has left child
			Node* p_Left = root->left;
			delete root;
			return p_Left;
		} else { //node has two children
			//find minimum value of right subtree (you could has find the maximum value of the right sub tree
			//this is because the min value of right subtree, or max value of left subtree can only have a max of one child
			Node* rightSide_Min = getMin(currNode);
			currNode->key = rightSide_Min->key;
			deleteNodeHelper(rightSide_Min, rightSide->key);
		}
		return currNode;
	}
}

Node* getMin(currNode){
	if(currNode->value < currNode->right->value){
		return currNode;
	} else {
		getMin(currNode->right);
	}
}

//insert parent node functions
void BST::insert(int data){
	root = insertHelper(root, data);
}

//note these recursive implementations are very reduntant
Node* BST::instertHelper(Node* currNode, int data){
	if(currNode == nullptr){
		return createNode(data);
	} else if (currNode->key < data){
		currNode->right = insertHelper(currNode->left,data);
		currNode->right->parent = currNode;
	}	else if (currNode->key > data){
		currNode->left = insertHelper(currNode->left,data);
		currNode->left->parent = currNode;
	}
	return currNode;
}

//actual node deletion
Node* getMin(currNode){
	if(currNode->value < currNode->right->value){
		return currNode;
	} else {
		getMin(currNode->right);
	}
}

//complete later
Node* rmNode(){
	rsm->parent->left = rsm->right;
}
