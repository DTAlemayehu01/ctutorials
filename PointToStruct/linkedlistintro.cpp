#include <iostream>

using namespace std;

struct Student {
	string name;
	int age;
	Student * next;
};

int main()
{
	//instantiate two pointers and allocate two objs on heap
	Student *s0, *s1;
	s0 = new Student;
	s1 = new Student;

	//another step???
	
	//connect the two nodes
	s0->next = s1;
	s1->next = nullptr;

	//what happens when running?
	s1 = new Student;
	s1->name = "bobby";
	s1->age = 12;
	//s1 no longer points to archnum/nullptr

	//how to connect this node to the end of the list?
	s0->next->next = s1;
	s1->next = nullptr;
	//we can point to a pointer and point s1 to nullptr

	delete s0;
	delete s1;
	return 0;	
}
