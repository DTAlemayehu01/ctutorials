#include<fstream>
#include<iostream>
int main () {
    std::ifstream file;
    std::ofstream outputfile;
    file.open("words1.txt");
    outputfile.open("words2.txt");
    std::string output;
    if(file.is_open()) {
        while(file >> output){
            std::cout << output << std::endl;
            outputfile << output << std::endl;
        }
    }
    file.close();
    outputfile.close();
}
