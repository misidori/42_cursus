/*	utils.cpp	*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <cfloat>
#include <limits>
#include <cerrno>

#include "ScalarConverter.h"
#include "ScalarConverter.hpp"

int getDotIndex(const char* str)
{
	int	i = 0;
	int	dot_index = 0;

	while (str[i])
	{
		if (str[i] == '.')
		{
			dot_index = i;
			return (dot_index);
		}
		i++;
	}

	return (0);
}

int countDots(const char* str)
{
	int	i = 0;
	int	count = 0;

	while (str[i])
	{
		if (str[i] == '.')
			count++;
		i++;
	}

	return (count);
}

void convertToDouble(const char* str)
{
	errno = 0;

	int	n_dots = countDots(str);
	int	num_decimal_digits = 0;

	if (n_dots == 1)
	{
		int	dotIndex = getDotIndex(str);
		num_decimal_digits = (strlen(str)-1) - dotIndex;
	}

	char* end;
	double num = strtod(str, &end);

	if (errno == ERANGE)
	{
		printImpossibleConversion();
		return ;
	}
	else
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		printDouble(num, num_decimal_digits);
	}
}

void convertToFloat(const char* str)
{
	errno = 0;
	int	n_dots = countDots(str);
	int	num_decimal_digits = 0;

	if (n_dots == 1)
	{
		int dotIndex = getDotIndex(str);
		num_decimal_digits = (strlen(str)-1) - dotIndex;
	}

	char* end;
	float num = strtof(str, &end);

	if (errno == ERANGE)
	{
		convertToDouble(str);
		return ;
	}
	else
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		printFloat(num, num_decimal_digits);
		printDouble(static_cast<double>(num), num_decimal_digits);
	}
}

void printImpossibleConversion()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
}

void printChar(char c)
{
	if (c >= 32 && c <= 126)
		std::cout << "char: '" << c << "'" << std::endl;
	else if ((c >= 0 && c <= 31) || c == 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
}

void printInt(int num)
{
	std::cout << "int: " << num << std::endl;
}

void printFloat(float num, int num_decimal_digits)
{
	if (num_decimal_digits == 0)
		std::cout << "float: " << num << ".0f" << std::endl;
	else
		std::cout << "float: " << num << "f" << std::endl;
}

void printDouble(double num, int num_decimal_digits)
{
	if (num_decimal_digits == 0)
		std::cout << "double: " << num << ".0" << std::endl;
	else
		std::cout << "double: " << num << std::endl;
}
