#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <vector>
#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define eqlrnge1_test main
#endif
#endif
int eqlrnge1_test(int, char**)
{
  std::cout<<"Results of eqlrnge1_test:"<<std::endl;
  typedef std::vector <int> IntVec;
  IntVec v(10);
  for(int i = 0; i < v.size(); i++)
    v[i] = i / 3;
  std::ostream_iterator<int> iter(std::cout, " ");
  std::cout << "Within the collection:\n\t";
  std::copy(v.begin(), v.end(), iter);
  std::pair <IntVec::iterator, IntVec::iterator> range =
	std::equal_range(v.begin(), v.end(), 2);
  std::cout
    << "\n2 can be inserted from before index "
    <<(range.first - v.begin())
    << " to before index "
    <<(range.second - v.begin())
    << std::endl;
  return 0;
}
