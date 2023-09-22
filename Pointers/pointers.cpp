#include <iostream>

using namespace std;

int main()
{
	//when a program is running all computers use ram to store data
	//like these vars down here	
	int age = 19;
	double gpa = 2.7;
	string name = "Mike";
	//there are containers for these vars and for a computer (not devor user) to access the program and there is an address it has to access to give you the variable, this is called memory address
	
	//this outputs the memory address, or the "pointer" of the var age
	cout << &age << endl;
	
	//you can even store these pointers in a pointer variable
	//here's an example for var gpa
	double *pGpa = &gpa;
	//the pointer var uses the same data type of its parent variable, it is initalized using the *
	//normally a pointer variable is named by putting a 'p' before the original variable's name and after the '*'
	//so if I want a pointer variable for a string it would look something like
	string *pName = &name;
       //or for an int
       int *pAge = &age;	


	//this prints the pointer stored in pGpa
	cout << pGpa << endl;
	
	//this prints the data stored at the pointer, this is called dereferencing a pointer
	cout << *pGpa << endl;

	//you can deference the representation for the var itself
	//here i do the same thing with gpa but don't reference the var
	cout << *&gpa << endl;

	//and it can be repeated again too to print pointer of the dereferenced pointer (just the pointer of gpa)
	cout << &*&gpa << endl;
	return 0;	
}
