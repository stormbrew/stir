#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <utility>

#ifdef MAIN 
#define pair0_test main
#endif
#endif
int pair0_test(int, char**)
{
  std::cout<<"Results of pair0_test:"<<std::endl;
  std::pair<int, int> p = std::make_pair(1, 10);
  std::cout << "p.first = " << p.first << ", p.second = " << p.second << std::endl;
  return 0;
}
