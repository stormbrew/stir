#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <algorithm>
#include <functional>

#ifdef MAIN 
#define minus_test main
#endif
#endif
int minus_test(int, char**)
{
  std::cout<<"Results of minus_test:"<<std::endl;
int input1 [4] = { 1, 5, 7, 8 };
int input2 [4] = { 1, 4, 8, 3 };

  int output [4];
  std::transform((int*)input1, (int*)input1 + 4, (int*)input2, (int*)output, std::minus<int>());
  for(int i = 0; i < 4; i++)
    std::cout << output[i] << std::endl;
  return 0;
}
