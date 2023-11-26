#include<iostream>
int main () {
  int num1 = 5 + 5;
  std::cout << num1 << std::endl;
  int num2 = num1 + 5;
  std::cout << num2 << std::endl;
  num2++;
  std::cout << num2 << std::endl;
  num2 += num2;
  std::cout << num2 << std::endl;
  return 0;
}
