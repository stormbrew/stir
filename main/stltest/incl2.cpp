#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <vector>
#include <algorithm>
#include <iostream>
#include <cstring>

#ifdef MAIN 
#define incl2_test main
#endif
#endif
static bool compare_strings(const char* s1_, const char* s2_)
{
  return std::strcmp(s1_, s2_) < 0 ? 1 : 0;
}
int incl2_test(int, char**)
{
  std::cout<<"Results of incl2_test:"<<std::endl;

  const char* names[] = {  "Todd", "Mike", "Graham", "Jack", "Brett"};

  const unsigned nameSize = sizeof(names)/sizeof(names[0]);
  std::vector <const char*> v1(nameSize);
  for(int i = 0; i < v1.size(); i++)
  {
    v1[i] = names[i];
  }
  std::vector <const char*> v2(2);

  v2[0] = "foo";
  v2[1] = "bar";
  std::sort(v1.begin(), v1.end(), compare_strings);
//  std::cout << "v1 sorted;\n";
  std::sort(v2.begin(), v2.end(), compare_strings);
//  std::cout << "v1 sorted;\n";

  bool inc = std::includes(v1.begin(), v1.end(),
                       v2.begin(), v2.end(),
                       compare_strings);
  if(inc)
    std::cout << "v1 includes v2" << std::endl;
  else
    std::cout << "v1 does not include v2" << std::endl;
  v2[0] = "Brett";
  v2[1] = "Todd";
  inc = std::includes(v1.begin(), v1.end(),
                  v2.begin(), v2.end(),
                  compare_strings);
  if(inc)
    std::cout << "v1 includes v2" << std::endl;
  else
    std::cout << "v1 does not include v2" << std::endl;
  return 0;
}
