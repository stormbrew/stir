#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <functional>
#include <iostream>
#include <map>

#ifdef MAIN 
#define mmap2_test main
#endif
#endif
int mmap2_test(int, char**)
{
  std::cout<<"Results of mmap2_test:"<<std::endl;
static int hook=0;
int bb=0;


typedef std::pair<const int, char> pair_type;

pair_type p1(3, 'c');
pair_type p2(6, 'f');
pair_type p3(1, 'a');
pair_type p4(2, 'b');
pair_type p5(3, 'x');
pair_type p6(6, 'f');

  typedef std::multimap<int, char, std::less<int> > mmap;

pair_type array [] =
  {
    p1,
    p2,
    p3,
    p4,
    p5,
    p6
  };

  mmap m(array, array + 6);
  mmap::iterator i;
  i = m.lower_bound(3);
  std::cout << "lower bound:" << std::endl;
  std::cout <<(*i).first << " -> " <<(*i).second << std::endl;
  i = m.upper_bound(3);
  std::cout << "upper bound:" << std::endl;
  std::cout <<(*i).first << " -> " <<(*i).second << std::endl;
  return 0;
}
