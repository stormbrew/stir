#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <functional>
#include <iostream>

#ifdef MAIN 
#define ptrbinf1_test main
#endif
static int sum(int x_, int y_)
{
  return x_ + y_;
}
#endif
int ptrbinf1_test(int, char**)
{
  std::cout<<"Results of ptrbinf1_test:"<<std::endl;

int input1 [4] = { 7, 2, 3, 5 };
int input2 [4] = { 1, 5, 5, 8 };

  int output [4];
  std::transform((int*)input1, (int*)input1 + 4, (int*)input2, (int*)output, 
    std::pointer_to_binary_function<int, int, int>(sum));
  for(int i = 0; i < 4; i++)
    std::cout << output[i] << std::endl;
  return 0;
}
