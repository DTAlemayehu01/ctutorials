#include <iostream>

using namespace std;

string getDayOfWeek(int dayNum){
	string dayName;

	//this is a switch statement each case handles a different input which in this case is a number, switch statemets are useful when trying to execute lines of code depending on the output of a single variable in this case the number of daynum
	switch(dayNum){
	//here dayNum=0 in the input so thus case 0 is executed
	case 0:
		dayName = "Sunday";
		break;
	case 1:
		dayName = "Monday";
		break;
	
	case 2:
		dayName = "Tuesday";
		break;
	
	case 3:
		dayName = "Wednesday";
		break;
	
	case 4:
		dayName = "Thursday";
		break;
	
	case 5:
		dayName = "Friday";
		break;
	
	case 6:
		dayName = "Saturday";
		break;
	//this is the executed code if none of the other conditions are met
	default:
		dayName = "Invalid Day Number";
		break;
	}
	return dayName;
}


int main()
{
	bool isMale = false;
	//if statements take conditions in parenthesis, and executes code in brackets if the conditions in parenthesis is true
	if(isMale){
		cout << "You are man!" << endl;
	} /*else is the key word for instructions to execute if condition is not true*/ else {
		cout << "You are no man!" << endl;
	}

	bool isHot = true;
	bool isGirl = true;
	//here both contitions must be true for the whole thing to be true
	if (isHot && isGirl){
		cout << "You are a hot girl ;)" << endl;
	} /* checks if either condition is true for whole thing is true, this code only executes if the last if statement failed so now we have an else if these can be chained until one or none is executed*/ else if(isHot || isGirl) {
		cout << "You are not hot girl ;)" << endl;
	} else {
		cout << "*Gen mysoginistic statement*" << endl;
	}	
	//this statement now uses a negation operator "!" to negate the false to true
	if(!isMale){
		cout << "You are man! ;)" << endl;
	}
	
	//booleans can be evaluted using comparisons
	//here is an example of a comparision operator
	bool greater = 2>1;
	//but booleans don't print as true or false, only 1 and 0 respectively
	cout << greater << " " << isMale << endl;

/* here's a list of comparison operators 
 * x>y , is x > y?
 * x<y , is x < y?
 * x>=y , is x greater than/equal to y?
 * x==y , is x equal to y?
 * x!=y , is x not equal to y?
 */
	int numnum;
	cout << "Enter # "; 
	cin >> numnum;
	cout << getDayOfWeek(numnum) << endl;

	return 0;	
}
