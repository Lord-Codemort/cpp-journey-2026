#include <iostream>

int main()
{
  // int *p_number{new int{67}};

  // int number{55};
  // p_number = &number;

  // int *p_number1{new int{55}};

  // p_number1 = new int{44};

  // delete p_number1;
  // p_number1 = nullptr;

  {
    int *p_number2{new int{57}};

    // use the dynamic memory
  }
  std::cout << "Program ending well" << std::endl;
  return 0;
}