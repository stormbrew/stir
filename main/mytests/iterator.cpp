#include <iterator>

int compile_iterator()
{
	char *test = "blah";
	std::reverse_iterator<char*> it = std::reverse_iterator<char*>(test + 4);
	while (it != std::reverse_iterator<char*>(test)) it++;
	return std::distance(it, it);
}
