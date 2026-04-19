#include <iostream>

const double PI{3.141592654};

class Cylinder
{
private:
  double base_radius{1};
  double height{1};

public:
  Cylinder()
  {
    base_radius = 2.0;
    height = 2.0;
  }

  Cylinder(double rad_param, double height_param)
  {
    base_radius = rad_param;
    height = height_param;
  }

  double volume()
  {
    return PI * base_radius * base_radius * height;
  }
};

int main()
{
  Cylinder cylinder1(10, 4);
  std::cout << "Volume of cylinder1: " << cylinder1.volume() << std::endl;
}