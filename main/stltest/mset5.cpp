#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <functional>
#include <iostream>
#include <set>

#ifdef MAIN 
#define mset5_test main
#endif
static bool less_than(int a_, int b_)
{
  return a_ < b_;
}
 
static bool greater_than(int a_, int b_)
{
  return a_ > b_;
}
#endif
int mset5_test(int, char**)
{
  std::cout<<"Results of mset5_test:"<<std::endl;

int array [] = { 3, 6, 1, 9 };

  typedef std::pointer_to_binary_function<int, int, bool> fn_type;
  typedef std::multiset<int, fn_type> mset;
  fn_type f(less_than);
  mset s1(array, array + 4, f);
  mset::const_iterator i = s1.begin();
  std::cout << "Using less_than: " << std::endl;
  while(i != s1.end())
    std::cout << *i++ << std::endl;
  fn_type g(greater_than);
  mset s2(array, array + 4, g);
  i = s2.begin();
  std::cout << "Using greater_than: " << std::endl;
  while(i != s2.end())
    std::cout << *i++ << std::endl;
  return 0;
}
