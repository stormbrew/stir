#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <functional>
#include <map>
#include <iostream>

#ifdef MAIN 
#define mmap1_test main
#endif
#endif
int mmap1_test(int, char**)
{
  std::cout<<"Results of mmap1_test:"<<std::endl;
  typedef std::multimap<char, int, std::less<char> > mmap;
  mmap m;
  std::cout << "count('X') = " << m.count('X') << std::endl;
  m.insert(std::pair<const char, int>('X', 10)); // Standard way.
  std::cout << "count('X') = " << m.count('X') << std::endl;
//  m.insert('X', 20); // Non-standard, but very convenient!
  m.insert(std::pair<const char, int>('X', 20));	// jbuck: standard way
  std::cout << "count('X') = " << m.count('X') << std::endl;
//  m.insert('Y', 32);
  m.insert(std::pair<const char, int>('Y', 32));	// jbuck: standard way
  mmap::iterator i = m.find('X'); // Find first match.
  while(i != m.end()) // Loop until end is reached.
  {
    std::cout <<(*i).first << " -> " <<(*i).second << std::endl;
    i++;
  }
  int count = m.erase('X');
  std::cout << "Erased " << count << " items" << std::endl;
  return 0;
}
