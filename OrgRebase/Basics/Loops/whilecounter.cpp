#include<iostream>
int main () {
    int number = 1;
    while(number < 6) {
        std::cout << number << " mississippi" << std::endl;
        number++;
    }
}

#include<iostream>
int main () {
    //make sure to assign numbers to these variables.
    int number;
    do {
        std::cout << number << " mississippi" << std::endl;
        number++;
    } while(number < 6);
}
