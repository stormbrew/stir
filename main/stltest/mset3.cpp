#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <functional>
#include <iostream>
#include <set>

#ifdef MAIN 
#define mset3_test main
#endif
#endif
int mset3_test(int, char**)
{
  std::cout<<"Results of mset3_test:"<<std::endl;
int array [] = { 3, 6, 1, 2, 3, 2, 6, 7, 9 };

  std::multiset<int, std::less<int> > s(array, array + 9);
  std::multiset<int, std::less<int> >::iterator i;
  i = s.lower_bound(3);
  std::cout << "lower bound = " << *i << std::endl;
  i = s.upper_bound(3);
  std::cout << "upper bound = " << *i << std::endl;
  return 0;
}
