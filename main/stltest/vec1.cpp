#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <algorithm>
#include <vector>

#ifdef MAIN 
#define vec1_test main
#endif
#endif
int vec1_test(int, char**)
{
  //   cout<<"Sizeof(vector) is "<<sizeof(vector<int>)<<endl;
  //  cout<<"Sizeof(fw) is "<<sizeof(forward_iterator_tag)<<endl;
  //  cout<<"Sizeof(ra) is "<<sizeof(random_access_iterator_tag)<<endl;
  std::cout<<"Results of vec1_test:"<<std::endl;
  std::vector<int> v1; // Empty vector of integers.
  std::cout << "empty = " << v1.empty() << std::endl;
  std::cout << "size = " << v1.size() << std::endl;
  std::cout << "max_size = " << v1.max_size() << std::endl;
  v1.push_back(42); // Add an integer to the vector.
  std::cout << "size = " << v1.size() << std::endl;
  std::cout << "v1[0] = " << v1[0] << std::endl;
  return 0;
}
