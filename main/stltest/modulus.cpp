#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <functional>
#include <iostream>

#ifdef MAIN 
#define modulus_test main
#endif
#endif
int modulus_test(int, char**)
{
  std::cout<<"Results of modulus_test:"<<std::endl;
int input1 [4] = { 6, 8, 10, 2 };
int input2 [4] = { 4, 2, 11, 3 };

  int output [4];
  std::transform((int*)input1, (int*)input1 + 4, (int*)input2, (int*)output, std::modulus<int>());
  for(int i = 0; i < 4; i++)
    std::cout << output[i] << std::endl;
  return 0;
}
