#include <string>
#include <cstdio>

int compile_string()
{
	std::string x("blah");
	return 0;
}

int run_string()
{
	std::string x("blah");
	x.insert(2, "oop");
	x.erase(4, 2);
	std::printf("%s (%d)\n", x.c_str(), x == std::string("blooh"));

	std::string y = x + "Hello";
	swap(x, y);
	std::printf("%s, %s\n", x.c_str(), y.c_str());
       
	x.replace(3, std::string::npos, "woop");
	y.clear();

	std::printf("%s, %s\n", x.c_str(), y.c_str());

	return 0;
}
