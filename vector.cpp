#include<iostream>

int main(){
	stl::vector<int> v0; //init vector v0

	if( v0.empty() ) { //vector dot operator
		cout << "v0 is empty";
	}

	vector<int> v1; //init vector v1

	vector<int> v2(5); //initing vector v2 with len 5

	vector<int> v2(5,3); //initalize vector of len 5 with all keys set to 3


	cout << "v2 = " << end " ";

	//unoptimized
	for(int i = 0; i < v2.size(); i++){
		cout << v2[i] << " ";
	}
	cout << endl;
	//optimized
	vecLen = v2.size();
	for(int i = 0; i < vecLen; i++){
		cout << v2[i] << " ";
	}
	v2[2] = 3;
	v2[4] = 1;
	/*v2[6] = 7; //INVAID*/

	v2.push_back(7); //pushes back number n to the end of vector
}
