# include <hpp file>

void Stack::push(string newItem){
	//Allocate new node
	//if stack is empty make new node the top node
	//blah blah blah?
	Node *temp = new Node;
	tem->item = newItem;
	if(top == nullptr){
		top = temp;
		top->next = nullptr;
	} else {
		temp->next = top;
		top = temp;
	}
}

void Stack::pop(){
	Node *temp;
	if(!isEmpty()){
		temp = top;
		top = top->next;
		delete temp;
	} else {
		cout << "Stack underflow" << endl;
	}
}
