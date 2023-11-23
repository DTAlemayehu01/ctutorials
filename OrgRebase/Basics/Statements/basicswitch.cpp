#include<iostream>
int main () {
    //be sure to assign a value so the program can compile
    int numberOfShoes;
    switch (numberOfShoes) {
        case 0:
            std::cout << "No Drip" << std::endl;
            break;
        case 1:
            std::cout << "Some Drip" << std::endl;
            break;
        default:
            std::cout << "How many shoes was that?" << std::endl;
            break;
    }
}
