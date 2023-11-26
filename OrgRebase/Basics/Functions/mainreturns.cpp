#include<iostream>

int main () {
    int num;
    std::cout << "Enter a Number: ";
    std::cin >> num;
    if(std::cin.fail()){
        std::cout << "Not a number." << std::endl;
        return 1;
    }
    std::cout << "Your number is " << num << "." << std::endl;
    return 0;
}
