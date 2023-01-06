#include <iostream>

int main() {

  unsigned long long num;

  std::cout << "Enter a number: ";
  std::cin >> num;
  int sum = 0;
  for (int i = 0; i < 20; i++) 
  {
    sum += (num >> i) & 1;
  }  
  std::cout << "Sum of bits: " << sum << std::endl;

  return 0;
}
