#include <iostream>

int main()
{
 int num1 = 75;
 int num2 = 60;

//  if (num1 < num2 == true) {
//   std::cout << num1 << " is less than " << num2 << std::endl;
//  }
//  if (!(num1 < num2 == true)) {
//   std::cout << num1 << " is not less than " << num2 << std::endl;
//  }

bool result = (num1 < num2);
// if (result) {
//     std::cout << num1 << " is less than " << num2 << std::endl;
// } else {
//     std::cout << num1 << " is not less than " << num2 << std::endl;
// }

bool green = true;
bool red = false;
bool yellow = false;
bool police_stop = true;

// if (green) {
//     std::cout << "Go!" << std::endl;
// } else if (yellow) {
//     std::cout << "Prepare to stop." << std::endl;
// } else if (red) {
//     std::cout << "Stop!" << std::endl;
// } else if (police_stop) {
//     std::cout << "Police stop!" << std::endl;
// }

// if (green) {
//   if (police_stop){
//     std::cout << "Police stop!" << std::endl;
//   }
//   else {
//     std::cout << "Go!" << std::endl;
//   }
// }

if(green && !police_stop) {
  std::cout << "Go!" << std::endl;
} else {
  std::cout << "Stop!" << std::endl;
}

 return 0;
}