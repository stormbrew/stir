#include <ios>

namespace std
{
	int std::ios_base::mXAllocCount = 0;

	ios_base &oct(ios_base &stream)
	{
		stream.setf(ios_base::oct, ios_base::basefield);
		return stream;
	}
	ios_base &dec(ios_base &stream)
	{
		stream.setf(ios_base::dec, ios_base::basefield);
		return stream;
	}
	ios_base &hex(ios_base &stream)
	{
		stream.setf(ios_base::hex, ios_base::basefield);
		return stream;
	}
	ios_base &internal(ios_base &stream)
	{
		stream.setf(ios_base::internal, ios_base::adjustfield);
		return stream;
	}
	ios_base &left(ios_base &stream)
	{
		stream.setf(ios_base::left, ios_base::adjustfield);
		return stream;
	}
	ios_base &right(ios_base &stream)
	{
		stream.setf(ios_base::right, ios_base::adjustfield);
		return stream;
	}
	ios_base &fixed(ios_base &stream)
	{
		stream.setf(ios_base::fixed, ios_base::floatfield);
		return stream;
	}
	ios_base &scientific(ios_base &stream)
	{
		stream.setf(ios_base::scientific, ios_base::floatfield);
		return stream;
	}
	ios_base &boolalpha(ios_base &stream)
	{
		stream.setf(ios::boolalpha);
		return stream;
	}
	ios_base &noboolalpha(ios_base &stream)
	{
		stream.unsetf(ios::boolalpha);
		return stream;
	}
	ios_base &showbase(ios_base &stream)
	{
		stream.setf(ios::showbase);
		return stream;
	}
	ios_base &noshowbase(ios_base &stream)
	{
		stream.unsetf(ios::showbase);
		return stream;
	}
	ios_base &showpoint(ios_base &stream)
	{
		stream.setf(ios_base::showpoint);
		return stream;
	}
	ios_base &noshowpoint(ios_base &stream)
	{
		stream.unsetf(ios_base::showpoint);
		return stream;
	}
	ios_base &showpos(ios_base &stream)
	{
		stream.setf(ios_base::showpos);
		return stream;
	}
	ios_base &noshowpos(ios_base &stream)
	{
		stream.unsetf(ios_base::showpos);
		return stream;
	}
	ios_base &skipws(ios_base &stream)
	{
		stream.setf(ios_base::skipws);
		return stream;
	}
	ios_base &noskipws(ios_base &stream)
	{
		stream.unsetf(ios_base::skipws);
		return stream;
	}
	ios_base &unitbuf(ios_base &stream)
	{
		stream.setf(ios_base::unitbuf);
		return stream;
	}
	ios_base &nounitbuf(ios_base &stream)
	{
		stream.unsetf(ios_base::unitbuf);
		return stream;
	}
	ios_base &uppercase(ios_base &stream)
	{
		stream.setf(ios_base::uppercase);
		return stream;
	}
	ios_base &nouppercase(ios_base &stream)
	{
		stream.unsetf(ios_base::uppercase);
		return stream;
	}
}