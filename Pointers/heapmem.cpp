#include <iostream>

using namespace std;

int main()
{
	//this a variable placed on the stack
	int a = 10;
	//you do not need pointers to access these values
	//and you do not need to deallocate it, compiler handles that

	//this is a variable on the heap
	int *b = new int;
	delete b;
	//first:
	//due to the runtime access of the heap,
	//the variable used to access the value at the heap
	//must be a pointer, it's like a heap of values and 
	//you need a pointer to find it	
	//second:
	//You MUST deallocate it manually at the end of run time
	//
	return 0;	
}
