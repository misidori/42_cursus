/*	main.cpp	*/

#include <iostream>

#include "ScalarConverter.h"

int	main(int argc, char* argv[])
{
	if (argc != 2) {
		std::cerr << RED << "./ScalarConverter requires 1 argument" << RESET << std::endl;
		return (1);
	}

	ScalarConverter::convert(argv[1]);

	return (0);
}
