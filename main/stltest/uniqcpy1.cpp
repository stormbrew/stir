#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define uniqcpy1_test main
#endif
#endif
int uniqcpy1_test(int, char**)
{
  std::cout<<"Results of uniqcpy1_test:"<<std::endl;
int numbers[8] = { 0, 1, 1, 2, 2, 2, 3, 4 };
int result[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

  std::unique_copy((int*)numbers, (int*)numbers + 8, (int*)result);
  for(int i = 0; i < 8; i++)
    std::cout << result[i] << ' ';
  std::cout << std::endl;
  return 0;
}
