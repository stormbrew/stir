#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <vector>
#include <algorithm>
#include <iostream>
#include <cstring>

#ifdef MAIN 
#define parsrtc2_test main
#endif
static bool str_compare(const char* a_, const char* b_)
{
  return std::strcmp(a_, b_) < 0 ? 1 : 0;
}
#endif
int parsrtc2_test(int, char**)
{
  std::cout<<"Results of parsrtc2_test:"<<std::endl;

  const char* names[] = { "aa", "ff", "dd", "ee", "cc", "bb" };

  const unsigned nameSize = sizeof(names) / sizeof(names[0]);
  std::vector <const char*> v1(nameSize);
  for(int i = 0; i < v1.size(); i++)
    v1[i] = names[i];
  std::ostream_iterator<const char*> iter(std::cout, " ");
  std::copy(v1.begin(), v1.end(), iter);
  std::cout << std::endl;
  std::vector <const char*> result(5);
  std::partial_sort_copy(v1.begin(),
                     v1.end(),
                     result.begin(),
                     result.end(),
                     str_compare);
  std::copy(v1.begin(), v1.end(), iter);
  std::cout << std::endl;
  return 0;
}
