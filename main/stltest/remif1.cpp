#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define remif1_test main
#endif
static bool odd(int a_)
{
  return a_ % 2;
}
#endif
int remif1_test(int, char**)
{
  std::cout<<"Results of remif1_test:"<<std::endl;

int numbers[6] = { 0, 0, 1, 1, 2, 2 };

  std::remove_if((int*)numbers, (int*)numbers + 6, odd);
  for(int i = 0; i < 6; i++)
    std::cout << numbers[i] << ' ';
  std::cout << std::endl;
  return 0;
}
