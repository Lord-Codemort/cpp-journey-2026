#include <iostream>

int main()
{
  bool red_light {false};
  bool green_light {true};

  if (red_light == true) {
    std::cout << "Stop!" << std::endl;
  }
  else {
    std::cout << "Go!" << std::endl;
  }

  if(green_light) {
    std::cout << "This is a green light." << std::endl;
  } else {
    std::cout << "This is not a green light." << std::endl;
  }

  //sizeof()
  std::cout << "Size of bool: " << sizeof(bool) << " bytes" << std::endl;

  std::cout << std::endl;
  std::cout << "red_light: " << red_light << std::endl;
  std::cout << "green_light: " << green_light << std::endl;

  std::cout << std::boolalpha;
  std::cout << "red_light: " << red_light << std::endl;
  std::cout << "green_light: " << green_light << std::endl;

  return 0;

}