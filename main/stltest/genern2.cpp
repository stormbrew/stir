#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <vector>
#include <algorithm>
#include <iostream>
#include "fib.h"

#ifdef MAIN 
#define genern2_test main
#endif
#endif
int genern2_test(int, char**)
{
  std::cout<<"Results of genern2_test:"<<std::endl;

  std::vector <int> v1(10);
  Fibonacci generator;
  std::generate_n(v1.begin(), v1.size(), generator);
  std::ostream_iterator<int> iter(std::cout, " ");
  std::copy(v1.begin(), v1.end(), iter);
  std::cout << std::endl;
  return 0;
}
