#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <deque>
#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define deque1_test main
#endif
#endif
int deque1_test(int, char**)
{
  std::cout<<"Results of deque1_test:"<<std::endl;
  std::deque<int> d;

  d.push_back(4); // Add after end.
  d.push_back(9);
  d.push_back(16);
  d.push_front(1); // Insert at beginning.
  int i;
  for(i = 0; i < d.size(); i++)
    std::cout << "d[" << i << "] = " << d[i] << std::endl;
  std::cout << std::endl;

  d.pop_front(); // Erase first element.

  d[2] = 25; // Replace last element.
  for(i = 0; i < d.size(); i++)
    std::cout << "d[" << i << "] = " << d[i] << std::endl;
  return 0;
}
