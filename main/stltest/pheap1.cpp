#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <vector>
#include <iostream>

#ifdef MAIN 
#define pheap1_test main
#endif
#endif
int pheap1_test(int, char**)
{
  std::cout<<"Results of pheap1_test:"<<std::endl;
  std::vector<int> v;

  v.push_back(1);
  v.push_back(20);
  v.push_back(4);
  std::make_heap(v.begin(), v.end());

  v.push_back(7);
  std::push_heap(v.begin(), v.end());

  std::sort_heap(v.begin(), v.end());
  std::ostream_iterator<int> iter(std::cout, " ");
  std::copy(v.begin(), v.end(), iter);
  std::cout << std::endl;

  return 0;
}
