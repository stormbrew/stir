#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>

#ifdef MAIN 
#define merge2_test main
#endif
#endif
int merge2_test(int, char**)
{
  std::cout<<"Results of merge2_test:"<<std::endl;
  std::vector <int> v1(5);
  std::vector <int> v2(v1.size());
  for(int i = 0; i < v1.size(); i++)
  {
    v1[i] = 10 - i;
    v2[i] =  7 - i;
  }
  std::vector <int> result(v1.size() + v2.size());
  std::merge(v1.begin(), v1.end(),
         v2.begin(), v2.end(),
         result.begin(),
         std::greater<int>() );
  std::ostream_iterator <int> iter(std::cout, " ");
  std::copy(v1.begin(), v1.end(), iter);
  std::cout << std::endl;
  std::copy(v2.begin(), v2.end(), iter);
  std::cout << std::endl;
  std::copy(result.begin(), result.end(), iter);
  std::cout << std::endl;
  return 0;
}
