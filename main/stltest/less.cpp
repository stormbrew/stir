#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <algorithm>
#include <functional>

#ifdef MAIN 
#define less_test main
#endif
#endif
int less_test(int, char**)
{
  std::cout<<"Results of less_test:"<<std::endl;
int array [4] = { 3, 1, 4, 2 };

  std::sort(array, array + 4, std::less<int>());
  for(int i = 0; i < 4; i++)
    std::cout << array[i] << std::endl;
  return 0;
}
