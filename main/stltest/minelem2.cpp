#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>
#include <cstring>

#ifdef MAIN 
#define minelem2_test main
#endif
static bool str_compare(const char* a_, const char* b_)
{
  return std::strcmp(a_, b_) < 0 ? 1 : 0;
}
#endif
int minelem2_test(int, char**)
{
  std::cout<<"Results of minelem2_test:"<<std::endl;

  const char* names[] = { "Brett", "Graham", "Jack", "Mike", "Todd" };

  const unsigned namesCt = sizeof(names)/sizeof(names[0]);
  std::cout << *std::min_element((char**)names, (char**)names + namesCt, str_compare) << std::endl;
  return 0;
}
