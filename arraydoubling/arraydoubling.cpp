#include <iostream>
//dont be stingy with variables, compilers will optimize out the variables to keep runtime as fast as possible
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

//Pass a pointer-pointer variable example (possible in C)
void arr2xPP(int **a, int *n){
	int *temp = new int[2*(*n)];
	for(int i = 0; i<*n; i++){
		temp[i] = a[i];
	}
	delete[]*a;
	*a = temp;
	*n = 2*(*n);
}

int main()
{
	//pass a pointer by ???
	
	
	//pass a pointer by reference example
	int length2 = 2;
	
	//pass a pointer-pointer variable example
	int length3 = 2;
	int *array = new int[length3];
	int **arr_pt = &array;
	arr2xPP(arr_pt, &length3);
	
	return 0;	
}
