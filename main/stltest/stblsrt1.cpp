#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define stblsrt1_test main
#endif
#endif
int stblsrt1_test(int, char**)
{
  std::cout<<"Results of stblsrt1_test:"<<std::endl;
int array[6] = { 1, 50, -10, 11, 42, 19 };

  std::stable_sort(array, array + 6);
  for(int i = 0; i < 6; i++)
    std::cout << array[i] << ' ';
  std::cout << std::endl;
  return 0;
}
