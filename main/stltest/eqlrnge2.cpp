#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <functional>
#include <iostream>
#include <string>

#ifdef MAIN 
#define eqlrnge2_test main
#endif
#endif
int eqlrnge2_test(int, char**)
{
  std::cout<<"Results of eqlrnge2_test:"<<std::endl;
char chars[] = "aabbccddggghhklllmqqqqssyyzz";

  const unsigned count = sizeof(chars) - 1;
  std::ostream_iterator<char> iter(std::cout);
  std::cout << "Within the collection:\n\t";
  std::copy(chars, chars + count, iter);
  std::pair <char*, char*> range =
	 std::equal_range((char*)chars, (char*)chars + count, 'q', std::less<char>());
  std::cout
    << "\nq can be inserted from before index "
    <<(range.first - chars)
    << " to before index "
    <<(range.second - chars)
    << std::endl;
  return 0;
}
