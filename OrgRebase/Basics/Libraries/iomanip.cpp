#include<iostream>
#include<iomanip>
int main () {
    double d = 1.123456789123456789123456789;
    std::cout << d << std::endl;
    std::cout << std::setprecision(17);
    std::cout << d << std::endl;
}
