#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <algorithm>
#include <functional>
#include <numeric>

#ifdef MAIN 
#define divides_test main
#endif
#endif
int divides_test(int, char**)
{
  std::cout<<"Results of divides_test:"<<std::endl;
  int input [3] = { 2, 3, 4 };

  int result = std::accumulate(input, input + 3, 48, std::divides<int>());
  std::cout << "result = " << result << std::endl;
  return 0;
}
