#include <iostream>

int add_numbers (int a, int b) {
  int result = a + b;
  return result;
}

int main()
{
  int first_number = 3;
  int second_number {7};

  std::cout << "First number: " << first_number << std::endl;
  std::cout << "Second number: " << second_number << std::endl;

  int sum = add_numbers(45,5);

  std::cout << "Sum: " << sum << std::endl;
  
  std::cout << "New sum: " << add_numbers(3, 43) << std::endl;
  return 0;
}