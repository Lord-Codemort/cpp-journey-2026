#include <iostream>

const double PI{3.141592654};

class Cylinder
{
public:
  double base_radius{1};
  double height{1};

public:
  double volume()
  {
    return PI * base_radius * base_radius * height;
  }
};

int main()
{
  Cylinder cylinder1{};

  std::cout << cylinder1.volume() << std::endl;
  // std::cout << "base_radius: " << cylinder1.base_radius << std::endl;
  // std::cout << "height: " << cylinder1.height << std::endl;

  cylinder1.base_radius = 3;
  cylinder1.height = 5;
  std::cout << cylinder1.volume() << std::endl;

  cylinder1.height = 8;
  std::cout << cylinder1.volume() << std::endl;
}