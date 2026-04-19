#include <iostream>

const double PI{3.141592654};

class Cylinder
{
private:
  double base_radius{1};
  double height{1};

private:
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
};

int main()
{
  Cylinder cylinder1;
}