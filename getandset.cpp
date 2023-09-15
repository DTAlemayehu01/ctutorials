#include <iostream>

using namespace std;

class Movie{
	//any attributes here can only be accessed by the Movie class, not even objects initalized by the class can use the private we can use public and private to control what can be set to a variable
	private:
	//any code outside of class can access the variables and constructor
		string rating;
	public:
		string title;
		string director;
		Movie(string aTitle, string aDirector, string aRating){
			title = aTitle;
			director = aDirector;
			setRating(aRating);
		}

		void setRating(string aRating){
			if(aRating == "G" || "PG" || "PG-13" || "R" || "NR"){
				rating = aRating;
			} else {
				rating = "NR";
			}
		}

		string getRating(){
			return rating;
		}
};

int main()
{
	Movie avengers("The Avengers", "Joss Whedon", "PG-13");
	
	//since we made rating private we need a function to grab the rating in order to print it
	cout << avengers.getRating() << endl;	

	return 0;	
}
