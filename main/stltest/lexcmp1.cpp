#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <algorithm>

#ifdef MAIN 
#define lexcmp1_test main
#endif
#endif
int lexcmp1_test(int, char**)
{
  std::cout<<"Results of lexcmp1_test:"<<std::endl;
const unsigned size = 6;
char n1[size] = "shoe";
char n2[size] = "shine";

  bool before = std::lexicographical_compare(n1, n1 + size, n2, n2 + size);
  if(before)
    std::cout << n1 << " is before " << n2 << std::endl;
  else
    std::cout << n2 << " is before " << n1 << std::endl;
  return 0;
}
