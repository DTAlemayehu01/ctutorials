#include <iostream>

using namespace std;

struct Student {
	string name;
	int age;
};

int main()
{
	//create stack pointer s0 and point to the heap new student
	Student *s0;
	s0 = new Student;
	
	return 0;	
}
