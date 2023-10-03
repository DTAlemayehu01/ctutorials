


void SLL::deleteNode(string Key){
	Node *deleteNode = search(sKey);
	Node *deleteNodePrev = head;
	while(deleteNodePrev->next!=deleteNode){
		deleteNode = deleteNode->next;
	}
	if(deleteNode != nullptr){
		if(deleteNode == head){
			head = head->next;
			delete deleteNode;
			deleteNode = nullptr;
		} else {
			deleteNodePrev->next = deleteNode->next;
			delete deleteNode;
			deleteNode = nullptr;
		}
	} else {
		std::cout << "Node doesn't exist" << std::endl;
	}
}
