#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define minelem1_test main
#endif
#endif
int minelem1_test(int, char**)
{
  std::cout<<"Results of minelem1_test:"<<std::endl;
int numbers[6] = { -10, 15, -100, 36, -242, 42 };

  std::cout << *std::min_element((int*)numbers, (int*)numbers + 6) << std::endl;
  return 0;
}
