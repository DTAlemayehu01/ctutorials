#include<iostream>
#include<string>

std::string igor(std::string name);

int main () {
    std::cout << igor("Trickster") << std::endl;
}

std::string igor(std::string name) {
    return "How goes the rehabilitation? " + name + ".";
}
