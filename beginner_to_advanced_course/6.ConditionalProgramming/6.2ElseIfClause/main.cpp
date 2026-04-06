#include <iostream>

  const int Pen {10};
  const int Pencil {20};
  const int Eraser {30};
  const int Ruler {40};
  const int Circle {50};
  const int Square {60};
  const int Ellipse {70};

int main()
{
  int tool {Ruler};

  if (tool == Pen)
  {
    std::cout << "You selected the pen." << std::endl;
  }
  else if (tool == Pencil)
  {
    std::cout << "You selected the pencil." << std::endl;
  }
  else if (tool == Eraser)
  {
    std::cout << "You selected the eraser." << std::endl;
  }
  else if (tool == Ruler)
  {
    std::cout << "You selected the ruler." << std::endl;
  }
  else if (tool == Circle)
  {
    std::cout << "You selected the circle." << std::endl;
  }
  else if (tool == Square)
  {
    std::cout << "You selected the square." << std::endl;
  }
  else if (tool == Ellipse)
  {
    std::cout << "You selected the ellipse." << std::endl;
  }

  return 0;
}