#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <algorithm>
#include <functional>

#ifdef MAIN 
#define bind2nd1_test main
#endif
#endif
int bind2nd1_test(int, char**)
{
  std::cout<<"Results of bind2nd1_test:"<<std::endl;
int array [3] = { 1, 2, 3 };

  std::replace_if(array, array + 3, 
    std::binder2nd<std::greater<int> >(std::greater<int>(), 2), 4);
  for(int i = 0; i < 3; i++)
    std::cout << array[i] << std::endl;
  return 0;
}
