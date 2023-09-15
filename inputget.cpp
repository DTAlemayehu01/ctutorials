#include <iostream>

using namespace std;

int main()
{
	int age;
	cout << "Enter Age: ";
	cin >> age;

	cout << "You are " << age << " years old!" << endl;
	//this will cut the prompt for the input of the name leaving no input
	
	string name;
	cout << "Enter your name: ";
	getline(cin, name);
	
	cout << "Hello " << name << "!";
	return 0;
}
