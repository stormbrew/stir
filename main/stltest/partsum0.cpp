#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>
#include <numeric>

#ifdef MAIN 
#define partsum0_test main
#endif
#endif
int partsum0_test(int, char**)
{
  std::cout<<"Results of partsum0_test:"<<std::endl;
int numbers[6] = { 1, 2, 3, 4, 5, 6 };

  int result[6];
  std::partial_sum((int*)numbers, (int*)numbers + 6, (int*)result);
  for(int i = 0; i < 6; i ++)
    std::cout << result[i] << ' ';
  std::cout << std::endl;
  return 0;
}
