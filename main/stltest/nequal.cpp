#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <functional>
#include <iostream>

#ifdef MAIN 
#define nequal_test main
#endif
#endif
int nequal_test(int, char**)
{
  std::cout<<"Results of nequal_test:"<<std::endl;
int input1 [4] = { 1, 7, 2, 2 };
int input2 [4] = { 1, 6, 2, 3 };

  int output [4];
  std::transform((int*)input1, (int*)input1 + 4, (int*)input2, (int*)output, std::not_equal_to<int>());
  for(int i = 0; i < 4; i++)
    std::cout << output[i] << std::endl;
  return 0;
}
