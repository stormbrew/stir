#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>
#include <cstring>

#ifdef MAIN 
#define binsrch2_test main
#endif
#endif
static bool str_compare(const char* a_, const char* b_)
{
  return std::strcmp(a_, b_) < 0 ? 1 : 0;
}
int binsrch2_test(int, char**)
{
  std::cout<<"Results of binsrch2_test:"<<std::endl;

  const char* labels[] = { "aa", "dd", "ff", "jj", "ss", "zz" };

  const unsigned count = sizeof(labels) / sizeof(labels[0]);
  // DEC C++ generates incorrect template instatiation code 
  // for "ff" so must cast 
  if(std::binary_search(labels, labels + count, (const char *)"ff", str_compare))
    std::cout << "ff is in labels." << std::endl;
  else
    std::cout << "ff is not in labels." << std::endl;
  return 0;
}
