#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <vector>
#include <algorithm>
#include <iostream>
#include <cstring>

#ifdef MAIN 
#define adjfind2_test main
#endif
#endif
static int equal_length(const char* v1_, const char* v2_)
{
  return std::strlen(v1_) == std::strlen(v2_);
}
int adjfind2_test(int, char**)
{
  std::cout<<"Results of adjfind2_test:"<<std::endl;
  typedef std::vector <const char*> CStrVector;

  const char* names[] = { "Brett", "Graham", "Jack", "Mike", "Todd" };

  const int nameCount = sizeof(names)/sizeof(names[0]);
  CStrVector v(nameCount);
  for(int i = 0; i < nameCount; i++)
    v[i] = names[i];
  CStrVector::iterator location;
  location = std::adjacent_find(v.begin(), v.end(), equal_length);
  if(location != v.end())
    std::cout
      << "Found two adjacent strings of equal length: "
      << *location
      << " -and- "
      << *(location + 1)
      << std::endl;
  else
    std::cout << "Didn't find two adjacent strings of equal length.";
  return 0;
}
