#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define findif0_test main
#endif
static bool odd(int a_)
{
  return a_ % 2;
}
#endif
int findif0_test(int, char**)
{
  std::cout<<"Results of findif0_test:"<<std::endl;

int numbers[6] = { 2, 4, 8, 15, 32, 64 };

  int* location = std::find_if((int*)numbers, (int*)numbers + 6, odd);
  if(location != numbers + 6)
    std::cout
      << "Value "
      << *location
      << " at offset "
      <<(location - numbers)
      << " is odd"
      << std::endl;
  return 0;
}
