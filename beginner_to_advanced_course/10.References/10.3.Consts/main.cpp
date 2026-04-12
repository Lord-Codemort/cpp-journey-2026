#include <iostream>

int main()
{
  int age{27};
  const int &ref_age{age};

  // std::cout << "age: " << age << std::endl;
  // std::cout << "ref_age: " << ref_age << std::endl;
b
  // ref_age = 30;
  // std::cout << "age: " << age << std::endl;
  // std::cout << "ref_age: " << ref_age << std::endl;

  const int *const p_age{&age};
}