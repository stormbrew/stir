#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <vector>
#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define findif1_test main
#endif
#endif
static bool div_3(int a_)
{
  return a_ % 3 ? 0 : 1;
}
int findif1_test(int, char**)
{
  std::cout<<"Results of findif1_test:"<<std::endl;

  typedef std::vector <int> IntVec;
  IntVec v(10);
  for(int i = 0; i < v.size(); i++)
    v[i] =(i + 1) *(i + 1);
  IntVec::iterator iter;
  iter = std::find_if(v.begin(), v.end(), div_3);
  if(iter != v.end())
    std::cout
      << "Value "
      << *iter
      << " at offset "
      <<(iter - v.begin())
      << " is divisible by 3"
      << std::endl;
  return 0;
}
