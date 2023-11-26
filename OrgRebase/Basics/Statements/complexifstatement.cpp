#include<iostream>
int main(){
    //be sure to assign the following variables a value in order to compile
    bool isWitch;
    bool isFemale;
    if(isWitch && isFemale){
        std::cout << "Don't Fuck with a witch!" << std::endl;
    } else if (isWitch || isFemale){
        std::cout << "If you need to learn how to talk to a lady, ask your mother!" << std::endl;
    } else {
        std::cout << "Hello there, Cheshire!" << std::endl;
    }
}
