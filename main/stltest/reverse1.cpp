#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define reverse1_test main
#endif
#endif
int reverse1_test(int, char**)
{
  std::cout<<"Results of reverse1_test:"<<std::endl;
int numbers[6] = { 0, 1, 2, 3, 4, 5 };

  std::reverse(numbers, numbers + 6);
  for(int i = 0; i < 6; i++)
    std::cout << numbers[i] << ' ';
  std::cout << std::endl;
  return 0;
}
