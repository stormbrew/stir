#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <functional>
#include <iostream>
#include <set>

#ifdef MAIN 
#define mset4_test main
#endif
#endif
int mset4_test(int, char**)
{
  std::cout<<"Results of mset4_test:"<<std::endl;
int array [] = { 3, 6, 1, 2, 3, 2, 6, 7, 9 };

  typedef std::multiset<int, std::less<int> > mset;
  mset s(array, array + 9);
  std::pair<mset::const_iterator, mset::const_iterator> p = s.equal_range(3);
  std::cout << "lower bound = " << *(p.first) << std::endl;
  std::cout << "upper bound = " << *(p.second) << std::endl;
  return 0;
}
