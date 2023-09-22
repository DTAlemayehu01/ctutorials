#include <iostream>

using namespace std;

struct Node{
	//in common practice "key" in linked lists refers to things like "search key"
	int key;
	Node* next;
}

int main()
{
	int arr[] = {5,12,14,17};
	int N = 4;

	//example begin
	//head, the first item in linked list
	Node *head, *temp, *prev;

	head = new Node;

	head->key = arr[0];
	head->next = nullptr;

	prev = head;
	for(int i = 1; i < N; i++){
		temp = new Node;
		temp->key = arr[i];
		temp->next = nullptr;
		prev->next = temp;
		prev = temp;
	}


	return 0;	
}
