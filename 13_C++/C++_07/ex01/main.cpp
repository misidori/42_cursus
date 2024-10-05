/*	main.cpp	*/

#include <iostream>
#include "iter.h"
#include "iter.hpp"

int	main(void)
{
	int			arrayInt[2] = { 5, 8 };
	double		arrayDouble[3] = { 1.1, 2.2, 3.3 };
	std::string	arrayStr[2] = { "ciao", "mamma" };

	int		lengthArrayInt = sizeof(arrayInt) / sizeof(int);
	int		lengthArrayDouble = sizeof(arrayDouble) / sizeof(double);
	int		lengthArrayStr = sizeof(arrayStr) / sizeof(std::string);

	::iter<int, int>(arrayInt, lengthArrayInt, printElement);
	std::cout << std::endl;

	::iter<double, double>(arrayDouble, lengthArrayDouble, printElement);
	std::cout << std::endl;

	::iter<std::string, std::string>(arrayStr, lengthArrayStr, printElement);
	std::cout << std::endl;

	return (0);
}
