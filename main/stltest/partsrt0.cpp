#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define partsrt0_test main
#endif
#endif
int partsrt0_test(int, char**)
{
  std::cout<<"Results of partsrt0_test:"<<std::endl;
int numbers[6] = { 5, 2, 4, 3, 1, 6 };

  std::partial_sort((int*)numbers, (int*)numbers + 3, (int*)numbers + 6);
  for(int i = 0; i < 6; i++)
    std::cout << numbers[i] << ' ';
  std::cout << std::endl;
  return 0;
}
