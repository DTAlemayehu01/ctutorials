#include <iostream>

using namespace std;

//sometimes there aren't enought data types
//classes are used to make new data types
//they're like blueprints for new data types
//or like containers for a collection of data types

//classes are usually named with Capital case instead of camel case like vars
//here's an example of a class
class Book {
	//the public class allows the data in a class to be accessed anywhere, classes are private by default 
	//structs are similar and used in older c++ versions and are private by default 
	public:
		//these are the vars that will go into class 'Book'
		string title;
		string author;
		int pages;
		//this is a constructor function it will execute when the class is called
		//the constructor function must have the same name as the class it has no return type
		//it can also take parameters, but you must make sure each instance of the 'Book' class has the parameters when they're initalized
		//unfortunately structs cant have member functions
		Book(string name){
			cout << name << " initalized!" << endl;
		}
};

//here's an example of using constructor functions to initialize an object with information
class Man {
	public:
	string name;
	int age;
	double height;
		//here's an example of function overloading a function with multiple definitions
		//This is used to execute different functions depending how many arguments are passed

		//often we use lowercase a before our name for a variable to indicate the variable is an argument (parameter)
		Man(string aName, int aAge, double aHeight){
			name = aName;
			age = aAge;
			height = aHeight;
		}
		//we can also have a constructor function to only pass in certain instead of all information
		//here we pass no information into our object
		Man(){
			name = "";
			age = 0;
			height = 0.0;
		}	
};

class Student {
	public:
		string name;
		string major;
		double gpa;
		Student(string aName, string aMajor, double aGpa){
			name = aName;
			major = aMajor;
			gpa = aGpa;
		}
		//here is an example of an object function, this allows objects to use their information to apply to functions
		//in other words we can use objects to call functions leading to different results per object
		//and for on the fly information adjustments
		bool hasHonors(){
			if(gpa >= 3.5){
				return true;
			} else {
				return false;
			}
		}
};



int main()
{
	//the actual instance of a class is called an object
	//here's an example of an object
	Book book1("Book 1"); //this initalizes object 'book1' from class 'Book'
	
	//these add specified var data of class 'Book' to object 'book1'
	book1.title = "Harry Potter";
	book1.author = "JK Rowling";
	book1.pages = 500;

	
	Book book2 ("Book 2"); //this initalizes object 'book1' from class 'Book'
	//these add specified var data of class 'Book' to object 'book1'
	book2.title = "Larry Potter";
	book2.author = "JGay Rowling";
	book2.pages = 420;
	
	//this prints out the set 'author' variable from object 'book2'
	cout << book2.author << endl;
	
	//you can't just print out an object you have to call the specific var to print
	//thus the follow command below won't compile
	//cout << book1 << endl;	


	//here we're using the class 'Man' to initialize object 'atate' with information instead of having to manually set information on each line of code
	Man atate("Andrew Tate",50,6.0);
	cout << atate.name << endl;	
	
	//this is us using our empty contructor function to make a placeholder object
	Man danny;
	cout << danny.name << endl;
	
	
	Student student1("Dan", "CS", 4.0);
	Student student2("Jam", "PPS", 3.4);
	
	//this is us using an object function to showcase how the two different objects cause the function to give two different returns
	cout << student1.hasHonors() << endl;
	cout << student2.hasHonors() << endl;

	return 0;	
}
