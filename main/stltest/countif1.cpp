#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <vector>
#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define countif1_test main
#endif
#endif
static int odd(int a_)
{
  return a_ % 2;
}
int countif1_test(int, char**)
{
  std::cout<<"Results of countif1_test:"<<std::endl;

  std::vector <int> numbers(100);
  for(int i = 0; i < 100; i++)
    numbers[i] = i % 3;
  int elements = std::count_if(numbers.begin(), numbers.end(), odd);
  std::cout << "Found " << elements << " odd elements." << std::endl;
  return 0;
}
