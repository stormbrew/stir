#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <vector>
#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define advance_test main
#endif
#endif
int advance_test(int, char**)
{
  std::cout<<"Results of advance_test:"<<std::endl;
  typedef std::vector <int> IntVector;
  IntVector v(10);
  for(int i = 0; i < v.size(); i++)
    v[i] = i;
  IntVector::iterator location = v.begin();
  std::cout << "At Beginning: " << *location << std::endl;
  std::advance(location, 5);
  std::cout << "At Beginning + 5: " << *location << std::endl;
  return 0;
}
