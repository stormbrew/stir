#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <vector>
#include <algorithm>

#ifdef MAIN 
#define vec7_test main
#endif
#endif
int vec7_test(int, char**)
{
  std::cout<<"Results of vec7_test:"<<std::endl;
int array1 [] = { 1, 4, 25 };
int array2 [] = { 9, 16 };

  std::vector<int> v(array1, array1 + 3);
  v.insert(v.begin(), 0); // Insert before first element.
  v.insert(v.end(), 36); // Insert after last element.
  int i;
  for(i = 0; i < v.size(); i++)
    std::cout << "v[" << i << "] = " << v[i] << std::endl;
  std::cout << std::endl;
  // Insert contents of array2 before fourth element.
  v.insert(v.begin() + 3, array2, array2 + 2);
  for(i = 0; i < v.size(); i++)
    std::cout << "v[" << i << "] = " << v[i] << std::endl;
  std::cout << std::endl;
  return 0;
}
