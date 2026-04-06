#include <iostream>
#include <iomanip>

int main()
{
  std::cout << "Hello" << std::endl;
  std::cout << "World" << std:: endl;

  std::cout << "This is a nice message..." << std::endl << std::flush;

  std::cout << std::setw(10) << "Hello" << std::endl;
  std::cout << std::setw(10) << "World" << std::endl;

  std::cout << std::right;
  std::cout << std::setw(10) << -123.45 << std::endl;
  std::cout << std::internal;
  std::cout << std::setw(10) << -123.45 << std::endl;

  int neg_num {134};
  std::cout << std::showpos;
  std::cout << neg_num << std::endl;
  return 0;
}