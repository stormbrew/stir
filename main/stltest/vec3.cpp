#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <vector>
#include <algorithm>
#ifdef MAIN 
#define vec3_test main
#endif
#endif
int vec3_test(int, char**)
{
  std::cout<<"Results of vec3_test:"<<std::endl;
  typedef  std::vector<char> vec_type;
  vec_type v1; // Empty vector of characters.
  v1.push_back('h');
  v1.push_back('i');
  std::cout << "v1 = " << v1[0] << v1[1] << std::endl;
  vec_type v2(v1.begin(), v1.end());
  v2[1] = 'o'; // Replace second character.
  std::cout << "v2 = " << v2[0] << v2[1] << std::endl;
  std::cout << "(v1 == v2) = " <<(v1 == v2) << std::endl;
  std::cout << "(v1 < v2) = " <<(v1 < v2) << std::endl;
  return 0;
}
