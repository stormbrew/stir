#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <algorithm>
#include <functional>

#ifdef MAIN 
#define bnegate1_test main
#endif
#endif
int bnegate1_test(int, char**)
{
  std::cout<<"Results of bnegate1_test:"<<std::endl;
int array [4] = { 4, 9, 7, 1 };

  std::sort(array, array + 4, std::binary_negate<std::greater<int> >(std::greater<int>()));
  for(int i = 0; i < 4; i++)
    std::cout << array[i] << std::endl;
  return 0;
}
