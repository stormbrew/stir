#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <functional>
#include <iostream>
#include <set>

#ifdef MAIN 
#define mset1_test main
#endif
  typedef std::multiset<int, std::less<int> > mset;
#endif
int mset1_test(int, char**)
{
  std::cout<<"Results of mset1_test:"<<std::endl;
  mset s;
  std::cout << "count(42) = " << s.count(42) << std::endl;
  s.insert(42);
  std::cout << "count(42) = " << s.count(42) << std::endl;
  s.insert(42);
  std::cout << "count(42) = " << s.count(42) << std::endl;
  std::multiset<int, std::less<int> >::const_iterator i = s.find(40);
  if(i == s.end())
    std::cout << "40 Not found" << std::endl;
  else
    std::cout << "Found " << *i << std::endl;
  i = s.find(42);
  if(i == s.end())
    std::cout << "Not found" << std::endl;
  else
    std::cout << "Found " << *i << std::endl;
  int count = s.erase(42);
  std::cout << "Erased " << count << " instances" << std::endl;
  return 0;
}
