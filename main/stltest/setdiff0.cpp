#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define setdiff0_test main
#endif
#endif
int setdiff0_test(int, char**)
{
  std::cout<<"Results of setdiff0_test:"<<std::endl;
int v1[3] = { 13, 18, 23 };
int v2[4] = { 10, 13, 17, 23 };
int result[4] = { 0, 0, 0, 0 };

  std::set_difference((int*)v1, (int*)v1 + 3, (int*)v2, (int*)v2 + 4, (int*)result);
  int i;
  for(i = 0; i < 4; i++)
    std::cout << result[i] << ' ';
  std::cout << std::endl;
  std::set_difference((int*)v2, (int*)v2 + 4, (int*)v1, (int*)v1 + 2, (int*)result);
  for(i = 0; i < 4; i++)
    std::cout << result[i] << ' ';
  std::cout << std::endl;
  return 0;
}
