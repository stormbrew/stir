#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream> 
#include <algorithm>
#include <functional>

#ifdef MAIN 
#define bnegate2_test main
#endif
#endif
int bnegate2_test(int, char**)
{
  std::cout<<"Results of bnegate2_test:"<<std::endl;
int array [4] = { 4, 9, 7, 1 };

  std::sort(array, array + 4, std::not2(std::greater<int>()));
  for(int i = 0; i < 4; i++)
    std::cout << array[i] << std::endl;
  return 0;
}
