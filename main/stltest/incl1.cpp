#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <vector>
#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define incl1_test main
#endif
#endif
int incl1_test(int, char**)
{
  std::cout<<"Results of incl1_test:"<<std::endl;
  std::vector<int> v1(10);
  std::vector<int> v2(3);
  int i;
  for(i = 0; i < v1.size(); i++)
  {
    v1[i] = i + 1; // " + 1" added by Pete Forman, 1999-10-28
  }
  if(std::includes(v1.begin(), v1.end(), v2.begin(), v2.end()))
    std::cout << "v1 includes v2" << std::endl;
  else
    std::cout << "v1 does not include v2" << std::endl;
  for(i = 0; i < v2.size(); i++)
    v2[i] = i + 3;
  if(std::includes(v1.begin(), v1.end(), v2.begin(), v2.end()))
    std::cout << "v1 includes v2" << std::endl;
  else
    std::cout << "v1 does not include v2" << std::endl;
  return 0;
}
