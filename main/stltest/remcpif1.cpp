#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define remcpif1_test main
#endif
static bool odd(int a_)
{
  return a_ % 2;
}
#endif
int remcpif1_test(int, char**)
{
  std::cout<<"Results of remcpif1_test:"<<std::endl;

int numbers[6] = { 1, 2, 3, 1, 2, 3 };
int result[6] = { 0, 0, 0, 0, 0, 0 };

  std::remove_copy_if((int*)numbers, (int*)numbers + 6, (int*)result, odd);
  for(int i = 0; i < 6; i++)
    std::cout << result[i] << ' ';
  std::cout << std::endl;
  return 0;
}
