#include<iostream>
#include<string>

void igor();

std::string igor(std::string name);

int main() {
    igor();
    std::cout << igor("Trickster") << std::endl;
}

void igor() {
    std::cout <<  "Welcome to the Velvet Room!" << std::endl;
}

std::string igor(std::string name) {
    return "How goes the rehabilitation? " + name + ".";
}
