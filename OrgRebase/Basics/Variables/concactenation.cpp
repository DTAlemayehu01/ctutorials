#include<iostream>
int main () {
    std::string x = "a";
    std::string y = "b";
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    x = x + y;
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    return 0;
}
