#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <vector>
#include <algorithm>

#ifdef MAIN 
#define iter1_test main
#endif
#endif
int iter1_test(int, char**)
{
  std::cout<<"Results of iter1_test:"<<std::endl;
  std::vector<const char*> v; // Vector of character strings.
  v.push_back((char*) "zippy"); // First element.
  v.push_back((char*) "motorboy"); // Second element.
  typedef std::vector<const char*> vec;
  vec::iterator i = v.begin(); // Position at end.
  for(i = v.begin(); i != v.end(); i++)
    std::cout << *i << std::endl; // Display item.
  return 0;
}
