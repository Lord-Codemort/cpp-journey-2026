#include <iostream>

int main()
{
  double double_value{12.34};
  double &ref_double_value{double_value};
  double *ptr_double_value{&double_value};

  // reading
  std::cout << "double_value: " << double_value << std::endl;
  std::cout << "ref_double_value: " << ref_double_value << std::endl;
  std::cout << "*ptr_double_value: " << *ptr_double_value << std::endl;
  std::cout << "ptr_double_value: " << ptr_double_value << std::endl;

  // writing through pointer
  *ptr_double_value = 56.78;
  std::cout << std::endl;
  std::cout << "double_value: " << double_value << std::endl;
  std::cout << "ref_double_value: " << ref_double_value << std::endl;
  std::cout << "*ptr_double_value: " << *ptr_double_value << std::endl;
  std::cout << "ptr_double_value: " << ptr_double_value << std::endl;

  // writing through reference
  ref_double_value = 90.12;
  std::cout << std::endl;
  std::cout << "double_value: " << double_value << std::endl;
  std::cout << "ref_double_value: " << ref_double_value << std::endl;
  std::cout << "*ptr_double_value: " << *ptr_double_value << std::endl;
  std::cout << "ptr_double_value: " << ptr_double_value << std::endl;

  double some_other_double{78.45};

  ref_double_value = some_other_double;

  std::cout << std::endl;
  std::cout << "double_value: " << double_value << std::endl;
  std::cout << "ref_double_value: " << ref_double_value << std::endl;
  std::cout << "*ptr_double_value: " << *ptr_double_value << std::endl;
  std::cout << "ptr_double_value: " << ptr_double_value << std::endl;

  ptr_double_value = &some_other_double;

  std::cout << "Make the pointer to point somewhere else:" << std::endl;
  std::cout << "double_value: " << double_value << std::endl;
  std::cout << "ref_double_value: " << ref_double_value << std::endl;
  std::cout << "*ptr_double_value: " << *ptr_double_value << std::endl;
  std::cout << "ptr_double_value: " << ptr_double_value << std::endl;

  *ptr_double_value = 12.34;
  std::cout << "After changing the value through the pointer:" << std::endl;
  std::cout << "double_value: " << double_value << std::endl;
  std::cout << "ref_double_value: " << ref_double_value << std::endl;
  std::cout << "*ptr_double_value: " << *ptr_double_value << std::endl;
  std::cout << "ptr_double_value: " << ptr_double_value << std::endl;
  std::cout << "&double_value: " << &double_value << std::endl;
  std::cout << "&ref_double_value: " << &ref_double_value << std::endl;

  return 0;
}