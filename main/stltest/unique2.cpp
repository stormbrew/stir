#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>
#include <cstring>

#ifdef MAIN 
#define unique2_test main
#endif
static bool str_equal(const char* a_, const char* b_)
{
  return std::strcmp(a_, b_) == 0 ? 1 : 0;
}
#endif
int unique2_test(int, char**)
{
  std::cout<<"Results of unique2_test:"<<std::endl;

  const char* labels[] = { "Q","Q","W","W","E","E","R","T","T","Y","Y" };

  const unsigned count = sizeof(labels) / sizeof(labels[0]);
  std::ostream_iterator <char*> iter(std::cout);
  std::copy((char**)labels, (char**)labels + count, iter);
  std::cout << std::endl;
  std::unique((char**)labels, (char**)labels + count, str_equal);
  std::copy((char**)labels, (char**)labels + count, iter);
  std::cout << std::endl;
  return 0;
}
