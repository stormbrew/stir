#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define nthelem0_test main
#endif
#endif
int nthelem0_test(int, char**)
{
  std::cout<<"Results of nthelem0_test:"<<std::endl;
int numbers[7] = { 5, 2, 4, 1, 0, 3 ,77};

  std::nth_element(numbers, numbers + 3, numbers + 6);
  for(int i = 0; i < 6; i++)
    std::cout << numbers[i] << ' ';
  std::cout << std::endl;
  return 0;
}
