#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <vector>
#include <iostream>

#ifdef MAIN 
#define count1_test main
#endif
#endif
int count1_test(int, char**)
{
  std::cout<<"Results of count1_test:"<<std::endl;
  std::vector <int> numbers(100);
  for(int i = 0; i < 100; i++)
    numbers[i] = i % 3;
  int elements = std::count(numbers.begin(), numbers.end(), 2);
  std::cout << "Found " << elements << " 2's." << std::endl;
  return 0;
}
