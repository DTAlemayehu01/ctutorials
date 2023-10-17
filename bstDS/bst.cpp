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
