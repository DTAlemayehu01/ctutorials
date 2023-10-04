#include <iostream>

void QueArrCir::enque(string newItem){
	if(!isFull()){
		a[tail] = newItem; //assume tail is pointing to a valid next element
		queSize++;

		if(tail == MAXSIZE-1){
			tail = 0;
		} else {
			tail++;
		}
	}
}

string QueArrCir::deque(){
	string output;
	if(!isEmpty()){
		output = a[head];
		queSize--;
		if(head == MAXSIZE-1){
			head = 0;
		} else {
			head++;
		}
	}
}
