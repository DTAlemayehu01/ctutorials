struct Node{
	std::string item;
	Node *next;
};

class Stack{
	private:
		Node *top;
		int count;
	public:
		Stack(); //constructor
		~Stack(); //destructor

		bool isEmpty();
		void push(std::string newItem);
		//Precondition: newItem is string
		//Postcondition: dynamically allocate a new nodea and push onto stack
		void pop();
}
