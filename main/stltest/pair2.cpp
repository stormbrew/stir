#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <utility>

#ifdef MAIN 
#define pair2_test main
#endif
#endif
int pair2_test(int, char**)
{
  std::cout<<"Results of pair2_test:"<<std::endl;
  std::pair<int, int> p = std::make_pair(1, 10);
  std::cout << "p.first = " << p.first << std::endl;
  std::cout << "p.second = " << p.second << std::endl;
  return 0;
}
