#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <algorithm>
#include <set>

#ifdef MAIN 
#define set1_test main
#endif
#endif
int set1_test(int, char**)
{
  std::cout<<"Results of set1_test:"<<std::endl;
  std::set<int, std::less<int> > s;
  std::cout << "count(42) = " << s.count(42) << std::endl;
  s.insert(42);
  std::cout << "count(42) = " << s.count(42) << std::endl;
  s.insert(42);
  std::cout << "count(42) = " << s.count(42) << std::endl;
  int count = s.erase(42);
  std::cout << count << " elements erased" << std::endl;
  return 0;
}
