#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <functional>
#include <iostream>

#ifdef MAIN 
#define lexcmp2_test main
#endif
#endif
int lexcmp2_test(int, char**)
{
  std::cout<<"Results of lexcmp2_test:"<<std::endl;
const unsigned size = 6;
char n1[size] = "shoe";
char n2[size] = "shine";

  bool before =
    std::lexicographical_compare(n1, n1 + size,
                             n2, n2 + size,
                             std::greater<char>());
  if(before)
    std::cout << n1 << " is after " << n2 << std::endl;
  else
    std::cout << n2 << " is after " << n1 << std::endl;
  return 0;
}
