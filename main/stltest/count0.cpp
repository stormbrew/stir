#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define count0_test main
#endif
#endif
int count0_test(int, char**)
{
  std::cout<<"Results of count0_test:"<<std::endl;
  int numbers[10] = { 1, 2, 4, 1, 2, 4, 1, 2, 4, 1 };

  int result = std::count(numbers, numbers + 10, 1);
  std::cout << "Found " << result << " 1's." << std::endl;
  return 0;
}
