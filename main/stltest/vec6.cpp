#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <vector>
#include <algorithm>

#ifdef MAIN 
#define vec6_test main
#endif
#endif
int vec6_test(int, char**)
{
  std::cout<<"Results of vec6_test:"<<std::endl;
int array [] = { 1, 4, 9, 16, 25, 36 };

  std::vector<int> v(array, array + 6);
  int i;
  for(i = 0; i < v.size(); i++)
    std::cout << "v[" << i << "] = " << v[i] << std::endl;
  std::cout << std::endl;
  v.erase(v.begin()); // Erase first element.
  for(i = 0; i < v.size(); i++)
    std::cout << "v[" << i << "] = " << v[i] << std::endl;
  std::cout << std::endl;
  v.erase(v.end() - 1); // Erase last element.
  for(i = 0; i < v.size(); i++)
    std::cout << "v[" << i << "] = " << v[i] << std::endl;
  std::cout << std::endl;
  v.erase(v.begin() + 1, v.end() - 1); // Erase all but first and last.
  for(i = 0; i < v.size(); i++)
    std::cout << "v[" << i << "] = " << v[i] << std::endl;
  std::cout << std::endl;
  /*
  v.erase(v.begin(), v.end()); // Erase all.
  */
  return 0;
}
