#include <iostream>

void say_age(int *age);

int main()
{
  int age{23};

  std::cout << "Age - before: " << age << ", &age: " << &age << std::endl;
  say_age(&age);
  std::cout << "Age - after: " << age << ", &age: " << &age << std::endl;
}

void say_age(int *age)
{
  ++(*age);
  std::cout << *age << ", &age: " << &age << std::endl;
}