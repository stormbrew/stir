#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define maxelem1_test main
#endif
#endif
int maxelem1_test(int, char**)
{
  std::cout<<"Results of maxelem1_test:"<<std::endl;
int numbers[6] = { 4, 10, 56, 11, -42, 19 };

  std::cout << *std::max_element((int*)numbers, (int*)numbers + 6) << std::endl;
  return 0;
}
