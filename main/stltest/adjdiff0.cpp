#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <numeric>
#include <iostream>

#ifdef MAIN 
#define adjdiff0_test main
#endif
#endif
int adjdiff0_test(int, char**)
{
  std::cout<<"Results of adjdiff0_test:"<<std::endl;
int numbers[5] = { 1, 2, 4, 8, 16 };

  int difference[5];
  std::adjacent_difference(numbers, numbers + 5, (int*)difference);
  int i;
  for(i = 0; i < 5; i++)
    std::cout << numbers[i] << ' ';
  std::cout << std::endl;
  for(i = 0; i < 5; i++)
    std::cout << difference[i] << ' ';
  std::cout << std::endl;
  return 0;
}
