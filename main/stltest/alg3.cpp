#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <vector>
#include <algorithm>

#ifdef MAIN 
#define alg3_test main
#endif
#endif
int alg3_test(int, char**)
{
  std::cout<<"Results of alg3_test:"<<std::endl;
  std::vector<int> i;
  i.push_back(1);
  i.push_back(4);
  i.push_back(2);
  i.push_back(8);
  i.push_back(2);
  i.push_back(2);
  int n = std::count(i.begin(), i.end(), 2);
  std::cout << "Count of 2s = " << n << std::endl;
  return 0;
}
