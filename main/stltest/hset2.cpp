#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <algorithm>
#include <hash_set>

#ifdef MAIN 
#define hset2_test main
#endif
#endif

// __STL_TYPE_TRAITS_POD_SPECIALIZE(_Hashtable_node<int>*);

int hset2_test(int, char**)
{
  std::cout<<"Results of hset2_test:"<<std::endl;
  hash_set<int, hash<int>, std::equal_to<int> > s;
  std::pair<std::hash_set<int, hash<int>, std::equal_to<int> >::const_iterator, bool> p = s.insert(42);
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
