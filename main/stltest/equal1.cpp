#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <vector>
#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define equal1_test main
#endif
#endif
int equal1_test(int, char**)
{
  std::cout<<"Results of equal1_test:"<<std::endl;
  std::vector <int> v1(10);
  for(int i = 0; i < v1.size(); i++)
    v1[i] = i;
  std::vector <int> v2(10);
  if(std::equal(v1.begin(), v1.end(), v2.begin()))
    std::cout << "v1 is equal to v2" << std::endl;
  else
    std::cout << "v1 is not equal to v2" << std::endl;
  std::copy(v1.begin(), v1.end(), v2.begin());
  if(std::equal(v1.begin(), v1.end(), v2.begin()))
    std::cout << "v1 is equal to v2" << std::endl;
  else
    std::cout << "v1 is not equal to v2" << std::endl;
  return 0;
}
