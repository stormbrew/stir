#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <vector>
#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define adjfind1_test main
#endif
#endif
int adjfind1_test(int, char**)
{
  std::cout<<"Results of adjfind1_test:"<<std::endl;
  typedef std::vector<int> IntVector;
  IntVector v(10);
  for(int i = 0; i < v.size(); i++)
    v[i] = i;
  IntVector::iterator location;
  location = std::adjacent_find(v.begin(), v.end());
  if(location != v.end())
    std::cout << "Found adjacent pair of: " << *location << std::endl;
  else
    std::cout << "No adjacent pairs" << std::endl;
  v[6] = 7;
  location = std::adjacent_find(v.begin(), v.end());
  if(location != v.end())
    std::cout << "Found adjacent pair of: " << *location << std::endl;
  else
    std::cout << "No adjacent pairs" << std::endl;
  return 0;
}
