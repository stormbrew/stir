#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define remove1_test main
#endif
#endif
int remove1_test(int, char**)
{
  std::cout<<"Results of remove1_test:"<<std::endl;
int numbers[6] = { 1, 2, 3, 1, 2, 3 };

  std::remove((int*)numbers, (int*)numbers + 6, 1);
  for(int i = 0; i < 6; i++)
    std::cout << numbers[i] << ' ';
  std::cout << std::endl;
  return 0;
}
