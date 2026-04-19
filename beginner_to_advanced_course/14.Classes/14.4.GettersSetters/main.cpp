#include <iostream>

const double PI{3.141592654};

class Cylinder
{
private:
  double base_radius{1};
  double height{1};

public:
  Cylinder() = default;

  Cylinder(double rad_param, double height_param)
  {
    base_radius = rad_param;
    height = height_param;
  }

  double volume()
  {
    return PI * base_radius * base_radius * height;
  }

  double get_base_radius()
  {
    return base_radius;
  }

  double get_height()
  {
    return height;
  }

  void set_base_radius(double rad_param)
  {
    base_radius = rad_param;
  }

  void set_height(double height_param)
  {
    height = height_param;
  }
};

int main()
{
  Cylinder cylinder1(10, 10);
  std::cout << "Volume of cylinder1: " << cylinder1.volume() << std::endl;
  std::cout << "Base radius of cylinder1: " << cylinder1.get_base_radius() << std::endl;
  std::cout << "Height of cylinder1: " << cylinder1.get_height() << std::endl;

  cylinder1.set_base_radius(100);
  cylinder1.set_height(10);
  std::cout << "Volume of cylinder1: " << cylinder1.volume() << std::endl;
}