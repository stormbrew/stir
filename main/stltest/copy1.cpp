#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>
#include <string>

#ifdef MAIN 
#define copy1_test main
#endif
#endif
int copy1_test(int, char**)
{
  std::cout<<"Results of copy1_test:"<<std::endl;
char string[23] = "A string to be copied.";

  char result[23];
  std::copy(string, string + 23, result);
  std::cout << " Src: " << string << "\nDest: " << result << std::endl;
  return 0;
}
