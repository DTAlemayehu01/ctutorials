#include<iostream>
int main () {
    std::string x = "Behold the Tenno, come to scavenge and desecrate this sacred realm.\nLook at them. They come to this place when they know they are not pure.\nMy brothers, did I not tell of this day? Did I not prophesise this moment?";
    std::cout << x << std::endl;
    std::cout << x.length() << std::endl;
    std::cout << x.find("I",0) << std::endl;
    std::cout << x.find("I",180) << std::endl;
    std::cout << x.substr(11,5) << std::endl;
    std::cout << x.substr(61,5) << std::endl;
    return 0;
}
