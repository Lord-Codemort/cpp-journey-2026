#include <iostream>

int main()
{
  size_t size{10};

  double *p_salaries{new double[size]};

  int *p_students{new (std::nothrow) int[size]{}};

  double *p_scores{new (std::nothrow) double[size]{1, 2, 3, 4, 5}};

  if (p_scores)
  {
    std::cout << "size of scores (it is a regular pointer): " << sizeof(p_scores) << std::endl;
    std::cout << "Successfully allocated memory for scores." << std::endl;

    for (size_t i{}; i < size; ++i)
    {
      std::cout << "value: " << p_scores[i] << " : " << *(p_scores + i) << std::endl;
    }
  }

  delete[] p_salaries;
  p_salaries = nullptr;

  delete[] p_students;
  p_students = nullptr;

  delete[] p_scores;
  p_scores = nullptr;

  // static vs dynamic arrays
  int scores[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  std::cout << "scores size:" << std::size(scores) << std::endl;

  for (auto s : scores)
  {
    std::cout << "value: " << s << std::endl;
  }

  int *p_scores1 = new int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  // std::cout << "p_scores1 size: " << std::size(p_scores1) << std::endl;

  // for (auto s : p_scores1)
  // {
  //   std::cout << "value: " << s << std::endl;
  // }

  delete[] p_scores1;
  p_scores1 = nullptr;
}