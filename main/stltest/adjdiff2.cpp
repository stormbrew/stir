#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <vector>
#include <numeric>
#include <iterator>
#include <iostream>

#ifdef MAIN 
#define adjdiff2_test main
#endif
static int mult(int a_, int b_)
{
  return a_ * b_;
}
#endif
int adjdiff2_test(int, char**)
{
  std::cout<<"Results of adjdiff2_test:"<<std::endl;

  std::vector <int> v(10);
  for(int i = 0; i < v.size(); i++)
    v[i] = i + 1;
  std::vector <int> rslt(v.size());
  std::adjacent_difference(v.begin(), v.end(), rslt.begin(), mult);
  std::ostream_iterator<int> iter(std::cout, " ");
  std::copy(v.begin(), v.end(), iter);
  std::cout << std::endl;
  std::copy(rslt.begin(), rslt.end(), iter);
  std::cout << std::endl;
  return 0;
}
