#include <iostream>

const int Pen = 10;
const int Pencil = 20;
const int Eraser = 30;
const int Highlighter = 40;
const int Ruler = 50;

int main()
{
  int tool = Pen;
  switch (tool)
  {
    case Pen:
      std::cout << "Using a pen." << std::endl;
      break;
    case Pencil:
      std::cout << "Using a pencil." << std::endl;
      break;
    case Eraser:
      std::cout << "Using an eraser." << std::endl;
      break;
    case Highlighter:
      std::cout << "Using a highlighter." << std::endl;
      break;
    default:
      std::cout << "Unknown tool." << std::endl;
      break;

    }

    std::cout <<"Moving on" << std::endl;
  return 0;
}