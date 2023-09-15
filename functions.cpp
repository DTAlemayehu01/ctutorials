#include <iostream>

using namespace std;

//functions can contain instructions, outputs, and parameters
//this one has no output, it's a void function that executes a print statement
void penis() {
	cout << "Hello World!" << endl;
}

void stubbed();

//you can call a parameter in a function like how you normally call a variable
void hiNameAge(string name, int age){
	cout << "Hi " << name << "! You are " << age << " years old!" <<endl;
}

//functions can return any data type
//since it's returning a data type the return can be stored in a vaariable
//e.g. int answer = cubed(x);
//and int function will return a number like how main returns 0
int cubed(int x) {
	return x*x*x;
}

int main()
{
	//this is what a function call looks like
	penis();	
	
	//this function is passing the name and age parameters to the hiNameAge function
	hiNameAge("Bob", 30);
	//it's great because you can change the input for each call of the function
	hiNameAge("Kathy", 13);

	stubbed();

	cout << cubed(2) << endl;
	return 0;
	//note that commands aren't executed after the return, it goes back with a value and never comes back
	cout << cubed(2);	
}

//a function down here will throw a compiler error unless it's stubbed before main()
//this fuction need to first be called like a variable before main and then it can be used from down here
void stubbed() {
	cout << "Stubbed!" << endl;
}
