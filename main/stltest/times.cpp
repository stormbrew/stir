#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <functional>
#include <iostream>
#include <numeric>

#ifdef MAIN 
#define times_test main
#endif
#endif
int times_test(int, char**)
{
  std::cout<<"Results of times_test:"<<std::endl;
int input [4] = { 1, 5, 7, 2 };

  int total = std::accumulate(input, input + 4, 1, std::multiplies<int>());
  std::cout << "total = " << total << std::endl;
  return 0;
}
