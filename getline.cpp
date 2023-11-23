//***To read a file *****

#include <fstream>
#include <iostream>

using namespace std;


int main (){

	ifstream readFile; //opens an input stream named readFile
	readFile.open("test1.txt"); //directs the input stream to test1.txt, aka it "opens a file", you can also use args to open files
	string fileLine;
	int sepcount = 0;
	if(readFile.is_open()){ //checks if the file was successfully opened to file stream 	
		while(getline(readFile,fileLine,' ')){ //getline(ifstream name, var name, char separator(by default the separator is the return key))
			sepcount++;
			cout << fileLine << endl;
		}
	}
	readFile.close();	
	//must then reopen ifstream to reparse
	readFile.open("test1.txt");
	cout << sepcount << endl;
	sepcount = 0;
	string filePine;
	ofstream writeFile;
	writeFile.open("test2.txt");
	while(getline(readFile,filePine,' ')){ //getline(ifstream name, var name, char separator(by default the separator is the return key))
		sepcount++;
		writeFile << filePine << endl;
	}
	writeFile << sepcount << endl;
	
	return 0;
}
