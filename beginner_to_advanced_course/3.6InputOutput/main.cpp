#include <iostream>
#include <string>

int main()
{
  //printing data
  // std::cout << "Hello, C++20" << std::endl;

  // int age = 21;
  // std::cout << "Age : " << age <<std::endl;

  // std::cerr << "This is an error message" << std::endl;
  // std::clog << "This is a log message" << std::endl;

  // int age1;
  // std::string name;

  // std::cout << "Enter your name and age: " << std::endl;
  // // std::cin >> name;
  // // std::cin >> age1;
  // std::cin >> name >> age1;

  // std::cout << "Hello, " << name << "! You are " << age1 << " years old." << std::endl;

  // data with spaces
  std::string full_name;
  int age;

  std::cout << "Enter your full name: " << std::endl;
  std::getline(std::cin, full_name);
  std::cout << "Enter your age: " << std::endl;
  std::cin >> age;
  std::cout << "Hello, " << full_name << "! You are " << age << " years old." << std::endl;
  return 0;
}