#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define prevprm0_test main
#endif
#endif
int prevprm0_test(int, char**)
{
  std::cout<<"Results of prevprm0_test:"<<std::endl;
int v1[3] = { 0, 1, 2 };

  std::prev_permutation(v1, v1 + 3);
  for(int i = 0; i < 3; i++)
    std::cout << v1[i] << ' ';
  std::cout << std::endl;
  return 0;
}
