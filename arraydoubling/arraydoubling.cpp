#include <iostream>

using namespace std;

//return a pointer example


//pass a pointer by refernece example
void arr2xRef(int*&a, int&n){
	int *temp = new int[2*n];
	for(int i = 0; i < n; i++}{
		temp[i]	= a[i];	
	}
	delete [] a;
	a = temp;
	n = 2*n;
}

int main()
{
	//pass a pointer by ???
	//pass a pointer by reference example
	//	
	return 0;	
}
