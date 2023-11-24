#include<iostream>
#include<string>
int main () {
    std::string str;
    std::cout << "First and Last Name: ";
    std::getline(std::cin,str,'\n');
    std::cout << str << std::endl;
}
