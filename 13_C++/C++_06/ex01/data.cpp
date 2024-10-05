/*	data.cpp	*/

#include <iostream>
#include "data.h"

std::ostream&	Data::print(std::ostream& os) const
{
	os << "value: " << value << std::endl;
	os << "text: " << text << std::endl;

	return (os);
}

std::ostream&	operator<<(std::ostream& os, const Data& data)
{
	return (data.print(os));
}

