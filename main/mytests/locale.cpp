#include <locale>
#include <cstdio>

// taken from http://www.cantrip.org/locale.html
class Stats  : public std::locale::facet 
{
	public:
	static std::locale::id id;

	Stats(int ss)        : shoeSize_(ss) {}
	int shoeSize() const { return shoeSize_; }

	private:
	Stats(Stats&);           // not defined:
	void operator=(Stats&);  // not defined:

	int shoeSize_;
};

std::locale::id Stats::id;

int run_locale()
{
	std::locale myLocale(std::locale(), new Stats(48));
	std::printf("shoe size: %d\n", std::use_facet<Stats>(myLocale).shoeSize());

	return 0;
}