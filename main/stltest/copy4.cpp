#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <vector>
#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define copy4_test main
#endif
#endif
int copy4_test(int, char**)
{
  std::cout<<"Results of copy4_test:"<<std::endl;
  typedef std::vector<int> IVec;
  std::vector<int> v1(10);
  for(int loc = 0; loc < v1.size(); loc++)
    v1[loc] = loc;
  std::vector<int> v2;
  std::insert_iterator<IVec> i(v2, v2.begin());
  std::copy(v1.begin(), v1.end(), i);
  std::ostream_iterator<int> outIter(std::cout, " ");
  std::copy(v2.begin(), v2.end(), outIter);
  std::cout << std::endl;
  return 0;
}
