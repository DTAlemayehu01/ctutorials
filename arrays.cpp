#include <iostream>

using namespace std;

int main()
{
	
	//you can call an array (say int pNums[]) and it's size before filling it (e.g. 20)
	int pnums[20] = {};


	//this indicates we want an array of ints
	int luckyNums[] = {4, 0, 8, 12};
	//prints 4
	cout << luckyNums[0] << endl;
	//changes value of first index and prints it
	luckyNums[0]=19;
	cout << luckyNums[0] << endl;
	cout << endl;
	
	//here's me adding a value to the last element in pnums
	pnums[19] = 0;
	cout << pnums[19] << endl;

	//here's an example of a 2d array
	//this is an array of 2 lists with 2 elements
	int matrix[2][2] = {
				{2,4},
				{6,8}
			};
	//this will look at the second list and the second item withing the list, this can go on for n times
	cout << matrix[1][1] << endl;

	return 0;
}
