#ifdef MAIN 
#define hmap1_test main
#endif
#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <hash_map>
#include <rope>
#endif


// typedef STLPORT::_Hashtable_node< pair< const char, crope > >* nodeptr;
// __STL_TYPE_TRAITS_POD_SPECIALIZE(nodeptr);

int hmap1_test(int, char**)
{
  std::cout<<"Results of hmap1_test:"<<std::endl;
  typedef hash_map<char, crope, hash<char>, std::equal_to<char> > maptype;
  maptype m;
  // Store mappings between roman numerals and decimals.
  m['l'] = "50";
  m['x'] = "20"; // Deliberate mistake.
  m['v'] = "5";
  m['i'] = "1";
  std::cout << "m['x'] = " << m['x'] << std::endl;
  m['x'] = "10"; // Correct mistake.
  std::cout << "m['x'] = " << m['x'] << std::endl;
  std::cout << "m['z'] = " << m['z'] << std::endl; // Note default value is added.
  std::cout << "m.count('z') = " << m.count('z') << std::endl;
  std::pair<maptype::iterator, bool> p =
      m.insert(std::pair<const char, crope>('c', crope("100")));
  if(p.second)
    std::cout << "First insertion successful" << std::endl;
  p = m.insert(std::pair<const char, crope>('c', crope("100")));
  if(p.second)
    std::cout << "Second insertion successful" << std::endl;
  else
    std::cout << "Existing pair " <<(*(p.first)).first
         << " -> " <<(*(p.first)).second << std::endl;
  return 0;
}
