#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <vector>
#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>

#ifdef MAIN 
#define inrprod1_test main
#endif
#endif
int inrprod1_test(int, char**)
{
  std::cout<<"Results of inrprod1_test:"<<std::endl;
  std::vector <int> v1(3);
  std::vector <int> v2(v1.size());
  for(int i = 0; i < v1.size(); i++)
  {
    v1[i] = i + 1;
    v2[i] = v1.size() - i;
  }
  std::ostream_iterator<int> iter(std::cout, " ");
  std::cout << "Inner product(sum of products) of:\n\t";
  std::copy(v1.begin(), v1.end(), iter);
  std::cout << "\n\t";
  std::copy(v2.begin(), v2.end(), iter);
  int result = std::inner_product(v1.begin(), v1.end(), v2.begin(), 0);
  std::cout << "\nis: " << result << std::endl;
  return 0;
}
