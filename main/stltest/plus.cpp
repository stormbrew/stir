#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <algorithm>
#include <functional>
#include <numeric>

#ifdef MAIN 
#define plus_test main
#endif
#endif
int plus_test(int, char**)
{
  std::cout<<"Results of plus_test:"<<std::endl;
int input1 [4] = { 1, 6, 11, 8 };
int input2 [4] = { 1, 5, 2, 3 };

  int total = 
    std::inner_product(input1, input1 + 4, input2, 0, std::plus<int>(), std::multiplies <int>());
  std::cout << "total = " << total << std::endl;
  return 0;
}
