#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <map>

#ifdef MAIN 
#define map1_test main
#endif
#endif

#include "map1.hpp"
std::ostream& operator<<(std::ostream& s, Int x)
  { return s << x.val; }

int map1_test(int, char**)
{
  std::cout<<"Results of map1_test:"<<std::endl;
  typedef std::map<char, Int, std::less<char> > maptype;
  maptype m;
  // Store mappings between roman numerals and decimals.
  m['l'] = 50;
  m['x'] = 20; // Deliberate mistake.
  m['v'] = 5;
  m['i'] = 1;
  std::cout << "m['x'] = " << m['x'] << std::endl;
  m['x'] = 10; // Correct mistake.
  std::cout << "m['x'] = " << m['x'] << std::endl;
  std::cout << "m['z'] = " << m['z'] << std::endl; // Note default value is added.
  std::cout << "m.count('z') = " << m.count('z') << std::endl;
  std::pair<maptype::iterator, bool> p =
      m.insert(std::pair<const char, Int>('c', 100));
  if(p.second)
    std::cout << "First insertion successful" << std::endl;
  p = m.insert(std::pair<const char, Int>('c', 100));
  if(p.second)
    std::cout << "Second insertion successful" << std::endl;
  else
    std::cout << "Existing pair " <<(*(p.first)).first
         << " -> " <<(*(p.first)).second << std::endl;
  return 0;
}
