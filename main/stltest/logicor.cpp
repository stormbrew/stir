#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <algorithm>
#include <functional>

#ifdef MAIN 
#define logicor_test main
#endif
#endif
int logicor_test(int, char**)
{
  std::cout<<"Results of logicor_test:"<<std::endl;
int input1 [4] = { 1, 1, 0, 1 };
int input2 [4] = { 0, 1, 0, 0 };

  int output [4];
  std::transform((int*)input1, (int*)input1 + 4, (int*)input2, (int*)output, std::logical_or<bool>());
  for(int i = 0; i < 4; i++)
    std::cout << output[i] << std::endl;
  return 0;
}
