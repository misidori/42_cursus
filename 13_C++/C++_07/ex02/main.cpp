/*	main.cpp	*/

#include <iostream>
#include "Array.h"
#include "Array.hpp"

#define MAX_VAL 750
int	main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int*	a = new int();
	Array	b = new Array();

	a[0] = 1;
	a[1] = 2;
	a[2] = 3;


	std::cout << *a << std::endl;

}
/*
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
*/
