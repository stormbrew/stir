#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <algorithm>

#ifdef MAIN 
#define istmit1_test main
#endif
#endif
int istmit1_test(int, char**)
{
  std::cout<<"Results of istmit1_test:"<<std::endl;
  char buffer [100];
  int i = 0;
  std::cin.unsetf(std::ios::skipws); // Disable white-space skipping.
  std::cout << "Please enter a string: ";
  std::istream_iterator<char> s(std::cin),meos;		//*TY 01/10/1999 - added eos()
  while(!(s == meos)  &&		
	//*TY 01/10/1999 - added end of stream check 
	// NOTE operator!= should not be used here ifndef __STL_FUNCTION_TMPL_PARTIAL_ORDER
  		*s != '\n' &&
  		(i < sizeof(buffer)/sizeof(buffer[0])) )		//*TY 07/28/98 - added index check
    buffer[i++] = *s++;
  buffer[i] = '\0'; // Null terminate buffer.
  std::cout << "read " << buffer << std::endl;
  return 0;
}
