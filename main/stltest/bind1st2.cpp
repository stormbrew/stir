#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <algorithm>
#include <functional>

#ifdef MAIN 
#define bind1st2_test main
#endif
#endif
int bind1st2_test(int, char**)
{
  std::cout<<"Results of bind1st2_test:"<<std::endl;
int array [3] = { 1, 2, 3 };

  int* p = std::remove_if((int*)array, (int*)array + 3, std::bind1st(std::less<int>(), 2));
  for(int* i = array; i != p; i++)
    std::cout << *i << std::endl;
  return 0;
}
