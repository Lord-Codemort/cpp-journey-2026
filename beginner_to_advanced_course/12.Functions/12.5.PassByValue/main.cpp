#include <iostream>

void say_age(int age);

int main()
{
  int my_age = 20;

  std::cout << "The age before the calling of the function is " << my_age << ", &age: " << &my_age << "." << std::endl;
  say_age(my_age);
  std::cout << "The age after the calling of the function is " << my_age << ", &age: " << &my_age << "." << std::endl;
}

void say_age(int age)
{
  ++age;
  std::cout << "Hello! You are " << age << " years old, &age: " << &age << "." << std::endl;
}