#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <vector>
#include <algorithm>

#ifdef MAIN 
#define iter3_test main
#endif
#endif
int iter3_test(int, char**)
{
  std::cout<<"Results of iter3_test:"<<std::endl;
  typedef std::vector<const char*> Vec;
  Vec v; // Vector of character strings.
  v.push_back((char*) "zippy"); // First element.
  v.push_back((char*) "motorboy"); // Second element.
  Vec::reverse_iterator it;
  for(it = v.rbegin(); it != v.rend(); it++)
    std::cout << *it << std::endl; // Display item.
  return 0;
}
