#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define setunon0_test main
#endif
#endif
int setunon0_test(int, char**)
{
  std::cout<<"Results of setunon0_test:"<<std::endl;
int v1[3] = { 13, 18, 23 };
int v2[4] = { 10, 13, 17, 23 };
int result[7] = { 0, 0, 0, 0, 0, 0, 0 };

  std::set_union((int*)v1, (int*)v1 + 3, (int*)v2, (int*)v2 + 4, (int*)result);
  for(int i = 0; i < 7; i++)
    std::cout << result[i] << ' ';
  std::cout << std::endl;
  return 0;
}
