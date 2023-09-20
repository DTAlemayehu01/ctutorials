#include <iostream>

using namespace std;

class Chef {
	//you can declare public and private members
	//this is not the same as "scope" or local/global
	//even if you call the class ordinarily like "Chef man.<private var> = value;" it won't work
	//this is so there is finer control on how class data is accessed
	
	//the only way to access private data is with a public member function, this function
	//can have checks to make sure the data passed to the private member
	//is what the class definer wants in their private member
	private:
	
	
	public:
		void makeChicken(){
			cout << "The chef makes chicken." << endl;
		}

		void makeSalad(){
			cout << "The chef makes salad." << endl;
		}

		void makeDish(){
			cout << "The chef makes dish." << endl;
		}


};

//here we have an example of an italian chef, it can inherit the functions of the normal chef on top of it's own functions
class ItalianChef : public Chef /*the phrase ': public Chef' inherits the public attributes from the superclass 'Chef' to the subclass 'Italian Chef'*/{
	public:
	//this adds extensibity to the ItalianChef, just note that the Chef is unable to use this function
	void makePasta(){
		cout << "The chef makes pasta." << endl;
	}
	
	//this overwrites the inherited makeDish() from the Chef superclass
	void makeDish(){
		cout << "The chef makes pizza." << endl;
	}	
};

int main()
{
	Chef chef;
	chef.makeChicken();
	chef.makeDish();
	
	ItalianChef chqef;
	chqef.makeChicken();
	chqef.makePasta();
	//because we overwrote makeDish() in the subclass this will have a different output
	chqef.makeDish();	
	
	return 0;	
}
