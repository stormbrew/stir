#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define ptition0_test main
#endif
#endif
static int less_10(int a_)
{
  return a_ < 10 ? 1 : 0;
}

int ptition0_test(int, char**)
{
  std::cout<<"Results of ptition0_test:"<<std::endl;
int numbers[6] = { 6, 12, 3, 10, 1, 20 };

  std::partition((int*)numbers, (int*)numbers + 6, less_10);
  for(int i = 0; i < 6; i++)
    std::cout << numbers[i] << ' ';
  std::cout << std::endl;
  return 0;
}
