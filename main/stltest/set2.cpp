#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <algorithm>
#include <set>

#ifdef MAIN 
#define set2_test main
#endif
#endif
int set2_test(int, char**)
{
  std::cout<<"Results of set2_test:"<<std::endl;
  std::set<int, std::less<int> > s;
  std::pair<std::set<int, std::less<int> >::iterator, bool> p = s.insert(42);
  if(p.second)
   std::cout << "Inserted new element " << *(p.first) << std::endl;
  else
   std::cout << "Existing element = " << *(p.first) << std::endl;
  p = s.insert(42);
  if(p.second)
   std::cout << "Inserted new element " << *(p.first) << std::endl;
  else
   std::cout << "Existing element = " << *(p.first) << std::endl;
  return 0;
}
