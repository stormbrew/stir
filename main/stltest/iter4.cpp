#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <vector>
#include <algorithm>

#ifdef MAIN 
#define iter4_test main
#endif
#endif
int iter4_test(int, char**)
{
  std::cout<<"Results of iter4_test:"<<std::endl;
  std::vector<int> v; // Empty vector of integers.
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  // Position immediately after last item.
  std::vector<int>::iterator i = v.end(); 
  // Move back one and then access.
  std::cout << "last element is " << *--i << std::endl; 
  i -= 2; // Jump back two items.
  std::cout << "first element is " << *i << std::endl;
  return 0;
}
