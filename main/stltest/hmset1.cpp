#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <hash_set>
// #include <bstring>
// #include <set>

#ifdef MAIN 
#define hmset1_test main
#endif

// struct hash<string> {
//      size_t operator()(const string& s) const { return __stl_hash_string(s.c_str()); }
//};

#if defined (__MVS__)
  #define star   92 
#else
  #define star   42
#endif 

typedef hash_multiset<char, hash<char>, std::equal_to<char> > hmset;
#endif

// __STL_TYPE_TRAITS_POD_SPECIALIZE(_Hashtable_node<char>*);


int hmset1_test(int, char**)
{
  std::cout<<"Results of hmset1_test:"<<std::endl;
  hmset s;
  std::cout << "count(" << star << ") = " << s.count(star) << std::endl;
  s.insert(star);
  std::cout << "count(" << star << ") = " << s.count(star) << std::endl;
  s.insert(star);
  std::cout << "count(" << star << ") = " << s.count(star) << std::endl;
  hmset::iterator i = s.find(40);
  if(i == s.end())
    std::cout << "40 Not found" << std::endl;
  else
    std::cout << "Found " << *i << std::endl;
  i = s.find(star);
  if(i == s.end())
    std::cout << "Not found" << std::endl;
  else
    std::cout << "Found " << *i << std::endl;
  int count = s.erase(star);
  std::cout << "Erased " << count << " instances" << std::endl;
  return 0;
}
