#include <iostream>

using namespace std;

struct Student{
	string name;
	int age;
}

int main()
{
	//passing data to Student s0
	Student s0;
	s0.name = "pat";
	s0.age = 44;
	
	cout << s0.name << " " << s0.age << endl;	
	
	//this inits a point to point to "Student" data types
	Student *sptr;
	//this sets the pointer to point to the address of s0
	sPtr = &s0;
		
	//passing data to s0
	(*sPtr).name = "pat";
	(*sPtr).age = 44;

	cout << s0.name << " " << s0.age << endl;	
	
	//passing data to s0
	sPtr ->name = "pat";
	sPtr->age = 44;

	cout << s0.name << " " << s0.age << endl;	
	return 0;	
}
