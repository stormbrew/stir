#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define rotate0_test main
#endif
#endif
int rotate0_test(int, char**)
{
  std::cout<<"Results of rotate0_test:"<<std::endl;
int numbers[6] = { 0, 1, 2, 3, 4, 5 };

  std::rotate((int*)numbers, numbers + 3, numbers + 6);
  for(int i = 0; i < 6; i++)
    std::cout << numbers[i] << ' ';
  std::cout << std::endl;
  return 0;
}
