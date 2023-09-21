#include <iostream>

using namespace std;

//pass by value function
void tripleIt(int num){
	num = num * 3;
	cout << num;
}

//pass by pointer function
void doubleIt(int *num){
	*num = *num * 2;
	cout << *num;
}

//pass by refernce function
void quadIt(int &num){
	num = num * 4;
	cout << num;
}

int main()
{
	int x = 10;
	//pass by value
	tripleIt(10);
	cout << x << endl;
	//pass by pointer
	x=10;
	doubleIt(&x);
	cout << x << endl;
	//pass by refereance
	x=10;
	quadIt(x);
	cout << x << endl;;
	return 0;	
}
