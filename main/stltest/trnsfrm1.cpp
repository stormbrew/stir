#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define trnsfrm1_test main
#endif
static int negate_int(int a_)
{
  return -a_;
}
#endif
int trnsfrm1_test(int, char**)
{
  std::cout<<"Results of trnsfrm1_test:"<<std::endl;

int numbers[6] = { -5, -1, 0, 1, 6, 11 };

  int result[6];
  std::transform((int*)numbers, (int*)numbers + 6, (int*)result, negate_int);
  for(int i = 0; i < 6; i++)
    std::cout << result[i] << ' ';
  std::cout << std::endl;
  return 0;
}
