#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <vector>
#include <algorithm>

#ifdef MAIN 
#define iter2_test main
#endif
#endif
static void print(const std::vector<const char*>& v_)
{
	std::vector<const char*>::const_iterator i;
  for(i = v_.begin(); i != v_.end(); i++)
    std::cout << *i << std::endl;
}
int iter2_test(int, char**)
{
  std::cout<<"Results of iter2_test:"<<std::endl;
  std::vector<const char*> v;
  v.push_back((char*) "zippy");
  v.push_back((char*) "motorboy");
  print(v);
  return 0;
}
