#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <string>
#include <iostream>

#ifdef MAIN 
#define string1_test main
#endif
#endif
int string1_test(int, char**)
{
  std::cout<<"Results of string1_test:"<<std::endl;
  const char* array = "Hello, World!";
  std::string v(array);
  int i;
  std::cout << v << std::endl;
  v.erase(v.begin() + 1, v.end() - 1); // Erase all but first and last.
  for(i = 0; i < v.size(); i++)
    std::cout << "v[" << i << "] = " << v[i] << std::endl;
  std::cout << std::endl;
  v.insert(1, (char*)array);
  v.erase(v.begin()); // Erase first element.
  v.erase(v.end() - 1); // Erase last element.
  std::cout << v << std::endl;
  v.clear(); // Erase all.
  return 0;
}
