#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <functional>
#include <iostream>

#ifdef MAIN 
#define negate_test main
#endif
#endif
int negate_test(int, char**)
{
  std::cout<<"Results of negate_test:"<<std::endl;
int input [3] = { 1, 2, 3 };

  int output[3];
  std::transform((int*)input, (int*)input + 3, (int*)output, std::negate<int>());
  for(int i = 0; i < 3; i++)
    std::cout << output[i] << std::endl;
  return 0;
}
