#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define replace0_test main
#endif
#endif
int replace0_test(int, char**)
{
  std::cout<<"Results of replace0_test:"<<std::endl;
int numbers[6] = { 0, 1, 2, 0, 1, 2 };

  std::replace(numbers, numbers + 6, 2, 42);
  for(int i = 0; i < 6; i++)
    std::cout << numbers[i] << ' ';
  std::cout << std::endl;
  return 0;
}
