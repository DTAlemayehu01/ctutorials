#include <iostream>

using namespace std;

class Chef {
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
