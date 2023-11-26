#include<iostream>
#include<vector>
int main () {
    std::vector<int> v0;
    std::vector<int> v1(5);
    std::vector<int> v2(5,3);
    std::vector<int> v3 = {3,2,1,4,5};
    std::cout << v0.empty() << std::endl;
    std::cout << v1.empty() << std::endl;
    std::cout << v2.empty() << std::endl;
    std::cout << v3.empty() << std::endl;
    std::cout << v0.size() << std::endl;
    std::cout << v1.size() << std::endl;
    std::cout << v2.size() << std::endl;
    std::cout << v3.size() << std::endl;
    v0.push_back(2);
    v1.push_back(2);
    v2.push_back(2);
    v3.push_back(2);
    int vecLen;
    for(int i = 0; i < 4; i++) {
        vecLen = v0.size();
        for(int j = 0; j < vecLen; j++) {
            std::cout << v0[j];
        }
        std::cout << std::endl;

        vecLen = v1.size();
        for(int j = 0; j < vecLen; j++) {
            std::cout << v1[j];
        }
        std::cout << std::endl;

        vecLen = v2.size();
        for(int j = 0; j < vecLen; j++) {
            std::cout << v2[j];
        }

        std::cout << std::endl;
        vecLen = v3.size();
        for(int j = 0; j < vecLen; j++) {
            std::cout << v3[j];
        }
        std::cout << std::endl;
    }
}
