#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define rndshuf0_test main
#endif
#endif
int rndshuf0_test(int, char**)
{
  std::cout<<"Results of rndshuf0_test:"<<std::endl;
int numbers[6] = { 1, 2, 3, 4, 5, 6 };

  std::random_shuffle(numbers, numbers + 6);
  for(int i = 0; i < 6; i++)
    std::cout << numbers[i] << ' ';
  std::cout << std::endl;
  return 0;
}
