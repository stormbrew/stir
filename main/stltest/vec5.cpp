#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <vector>
#include <algorithm>

#ifdef MAIN 
#define vec5_test main
#endif
#endif
int vec5_test(int, char**)
{
  std::cout<<"Results of vec5_test:"<<std::endl;
int array [] = { 1, 4, 9, 16 };

  std::vector<int> v(array, array + 4);
  for(int i = 0; i < v.size(); i++)
    std::cout << "v[" << i << "] = " << v[i] << std::endl;
  return 0;
}
