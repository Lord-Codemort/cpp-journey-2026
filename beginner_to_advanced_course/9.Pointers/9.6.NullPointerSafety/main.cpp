#include <iostream>

int main()
{
  std::cout << std::endl;
  int *p_number{};

  if (p_number)
  {
    std::cout << "p_number points to a VALID adress: " << p_number << std::endl;
    std::cout << "*p_number: " << *p_number << std::endl;
  }
  else
  {
    std::cout << "p_number points to an INVALID adress" << std::endl;
  }

  delete p_number;
  p_number = nullptr;

  int *p_number1{};
  delete p_number1;

  return 0;
}