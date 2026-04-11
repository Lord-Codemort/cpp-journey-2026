#include <iostream>

int main()
{
//  int number {22};

//  int *p_number = &number;

//  std::cout << number << std::endl;
//  std::cout << p_number << std::endl;
//  std::cout << &number << std::endl;
//  std::cout << *p_number << std::endl;

//  int *p_number1;
//  int number1 {12};
//  p_number1 = &number1;
//  std::cout << std::endl;
//  std::cout << "Uninitialized pointer: " << p_number1 << std::endl;
//  std::cout << "*p_number1: " << *p_number1 << std::endl;

//  int *p_number2;
//  *p_number2 = 55;
//  std::cout << "p_number2: " << p_number2 << std::endl;
//  std::cout << "*p_number2: " << *p_number2 << std::endl;

// int *p_number3 {};

// *p_number3 = 33;

// std::cout << "p_number3: " << p_number3 << std::endl;
// std::cout << "*p_number3: " << *p_number3 << std::endl;


// int *p_number4 {nullptr};
// p_number4 = new int;

// *p_number4 = 77;
// std::cout << "p_number4: " << p_number4 << std::endl;
// std::cout << "*p_number4: " << *p_number4 << std::endl;

// delete p_number4;

// p_number4 = nullptr;

int *p_number5 {new int};
int *p_number6 {new int (22)};
int *p_number7 {new int {23}};

std::cout << "p_number5: " << p_number5 << std::endl;
std::cout << "*p_number5: " << *p_number5 << std::endl;

std::cout << "p_number6: " << p_number6 << std::endl;
std::cout << "*p_number6: " << *p_number6 << std::endl;

std::cout << "p_number7: " << p_number7 << std::endl;
std::cout << "*p_number7: " << *p_number7 << std::endl;

delete p_number5;
p_number5 = nullptr;

delete p_number6;
p_number6 = nullptr;

delete p_number7;
p_number7 = nullptr;


p_number5 = new int(81);
std::cout << "*p_number5: " << *p_number5 << std::endl;

delete p_number5;
p_number5 = nullptr;

p_number5 = new int (99);
std::cout << "*p_number5: " << *p_number5 << std::endl;

delete p_number5;
delete p_number5;

std::cout << "The program is ending well!" << std::endl;

}