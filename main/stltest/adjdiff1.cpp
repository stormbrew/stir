#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <vector>
#include <numeric>
#include <iterator>
#include <iostream>

#ifdef MAIN 
#define adjdiff1_test main
#endif
#endif
int adjdiff1_test(int, char**)
{
  std::cout<<"Results of adjdiff1_test:"<<std::endl;
  std::vector <int> v(10);
  for(int i = 0; i < v.size(); i++)
    v[i] = i * i;
  std::vector <int> result(v.size());
  std::adjacent_difference(v.begin(), v.end(), result.begin());
  std::ostream_iterator<int> iter(std::cout, " ");
  std::copy(v.begin(), v.end(), iter);
  std::cout << std::endl;
  std::copy(result.begin(), result.end(), iter);
  std::cout << std::endl;
  return 0;
}
