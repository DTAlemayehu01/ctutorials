#include <iostream>

using namespace std;

int main()
{
	bool run = true;
	int cont;
	//this is a while loop, it loops white condition is true
	while(run){
		cout << "Continue? (Y=1, N=0)" << endl;
		bool isSet = false;
		while(!isSet){
			cin >> cont;
			switch(cont){
			case 0:
				//for an odd reason passing a string will make int cout=0
				run = false;
				cout << "Goodbye!" << endl;
				isSet = true;
				break;
			case 1:
				run = true;
				cout << "Nice!" << endl;
				isSet = true;
				break;
			default:
				cout << "Please enter 0 or 1" << endl;
				break;
			}
		}
		
	}

	//this is an example of a do while loop, like a while loop but executes code then checks condition, more or less the same but sementically useful for readability
	/*
	 * do{
	 * 	psuedocode
	 *} while(condition);	
	*/


	//this is a for loop, it executes a specific amount of time
	//it's just like a js loop, like being able to be used for iterating through arrays
	for(int i = 0; i < 6; i++){
		cout << "Ronald Wilson Reagan" << endl;
	}

	
	//here's an example of a 2d array
	//this is an array of 2 lists with 2 elements
	int matrix[2][2] = {
				{2,4},
				{6,8}
			};
	//this will look at the second list and the second item withing the list, this can go on for n times
	cout << matrix[1][1] << endl;
	
	//this is a nested loop a loop within a loop, we're using this to iterate through all elements in 2d array int matrix[][]
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++){
			cout << matrix[i][j];
		}
		cout << endl;
	}

	return 0;	
}
