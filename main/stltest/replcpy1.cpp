#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define replcpy1_test main
#endif
#endif
int replcpy1_test(int, char**)
{
  std::cout<<"Results of replcpy1_test:"<<std::endl;
int numbers[6] = { 0, 1, 2, 0, 1, 2 };
int result[6] = { 0, 0, 0, 0, 0, 0 };

  std::replace_copy((int*)numbers, (int*)numbers + 6, (int*)result, 2, 42);
  for(int i = 0; i < 6; i++)
    std::cout << result[i] << ' ';
  std::cout << std::endl;
  return 0;
}
