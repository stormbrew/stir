#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <vector>
#include <algorithm>

#ifdef MAIN 
#define vec2_test main
#endif
static void print(std::vector<double>& vector_)
{
  for(int i = 0; i < vector_.size(); i++)
    std::cout << vector_[i] << " ";
  std::cout << std::endl;
}
#endif
int vec2_test(int, char**)
{
  std::cout<<"Results of vec2_test:"<<std::endl;

  std::vector<double> v1; // Empty vector of doubles.
  v1.push_back(32.1);
  v1.push_back(40.5);
  std::vector<double> v2; // Another empty vector of doubles.
  v2.push_back(3.56);
  std::cout << "v1 = ";
  print(v1);
  std::cout << "v2 = ";
  print(v2);
  v1.swap(v2); // Swap the vector's contents.
  std::cout << "v1 = ";
  print(v1);
  std::cout << "v2 = ";
  print(v2);
  v2 = v1; // Assign one vector to another.
  std::cout << "v2 = ";
  print(v2);
  return 0;
}
