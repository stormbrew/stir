#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define unique1_test main
#endif
#endif
int unique1_test(int, char**)
{
  std::cout<<"Results of unique1_test:"<<std::endl;
int numbers[8] = { 0, 1, 1, 2, 2, 2, 3, 4 };

  std::unique((int*)numbers, (int*)numbers + 8);
  for(int i = 0; i < 8; i ++)
    std::cout << numbers[i] << ' ';
  std::cout << std::endl;
  return 0;
}
