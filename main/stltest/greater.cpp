#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <algorithm>
#include <functional>

#ifdef MAIN 
#define greater_test main
#endif
#endif
int greater_test(int, char**)
{
  std::cout<<"Results of greater_test:"<<std::endl;
int array [4] = { 3, 1, 4, 2 };

  std::sort(array, array + 4, std::greater<int>());
  for(int i = 0; i < 4; i++)
    std::cout << array[i] << std::endl;
  return 0;
}
