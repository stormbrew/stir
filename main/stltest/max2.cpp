#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>
#include <cstring>

#ifdef MAIN 
#define max2_test main
#endif
#endif
static bool str_compare(const char* a_, const char* b_)
{
  return std::strcmp(a_, b_) < 0 ? 1 : 0;
}

int max2_test(int, char**)
{
  std::cout<<"Results of max2_test:"<<std::endl;

  std::cout << std::max((char *)"shoe",(char *)"shine", str_compare) << std::endl;
  return 0;
}
