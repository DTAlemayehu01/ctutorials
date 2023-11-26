#include<iostream>

int main (int argc, char* argv[]) {
    if(argc != 2) {
        std::cout << "Expected 2 args." << std::endl;
        return 1;
    }
    std::cout << "With the exception of course of " << argv[1] << std::endl;
    return 0;
}
