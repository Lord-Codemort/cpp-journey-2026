#include <iostream>

int main()
{
//  int *p_number;

//  std::cout<< std::endl;
//  std::cout <<"p_number: "<< p_number << std::endl;
//  std::cout << "*p_number: "<< *p_number << std::endl;

 
//  // case 2
//  std::cout << std::endl;
//  std::cout << "Case 2 : Deleted pointer" << std::endl;
 
//  int *p_number1 { new int {67}};
//  std::cout << "*p_number1: "<< *p_number1 << std::endl;
 
//  delete p_number1;
//  std::cout << "*p_number1 after deletion: "<< *p_number1 << std::endl;

// int *p_number3 {new int {83}};
// int *p_number4 { p_number3};

// std::cout << "p_number3 - " << p_number3 << " - " << *p_number3 << std::endl;
// std::cout << "p_number4 - " << p_number4 << " - " << *p_number4 << std::endl;

// delete p_number4;

// std::cout << "p_number4 after deleting p_number3: " << p_number4 << " - " << *p_number4 << std::endl;

// int *p_number5 {nullptr};
// int *p_number6 {new int(87)};

// if (p_number6 != nullptr) {
//   std::cout << "*p_number6: " << *p_number6 << std::endl;
// } else {
//   std::cout << "Invalid address" << std::endl;
// }

// int *p_number7{new int {82}};

// std::cout << "p_number7: " << p_number7 << " - " << *p_number7 << std::endl;

// delete p_number7;
// p_number7 = nullptr;

// if(p_number7 != nullptr) {
//   std::cout << "*p_number7: " << *p_number7 << std::endl;
// } else {
//   std::cout << "Invalid address" << std::endl;
// }

int *p_number8 {new int {382}};
int *p_number9 {p_number8};

std::cout << "p_number8: " << p_number8 << " - " << *p_number8 << std::endl;

if (!(p_number8 == nullptr)) {
  std::cout << "p_number9 - " << p_number9 << " - " << *p_number9 << std::endl;
}

delete p_number8;
p_number8 = nullptr;

if (!(p_number8 == nullptr)) {
  std::cout << "p_number9 - " << p_number9 << " - " << *p_number9 << std::endl;
} else {
  std::cerr << "WARNING: Trying to use an invalid pointer" << std::endl;
}

std::cout << "Program ends well" << std::endl;
}
