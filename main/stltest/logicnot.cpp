#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <algorithm>
#include <functional>

#ifdef MAIN 
#define logicnot_test main
#endif
#endif
int logicnot_test(int, char**)
{
  std::cout<<"Results of logicnot_test:"<<std::endl;
bool input [7] = { 1, 0, 0, 1, 1, 1, 1 };

  int n = std::count_if(input, input + 7, std::logical_not<bool>());
  std::cout << "count = " << n << std::endl;
  return 0;
}
