/*	ScalarConverter.cpp	*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <cfloat>
#include <limits>
#include <cerrno>

#include "utils.h"
#include "ScalarConverter.h"
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& src)
{
	*this = src;
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& src)
{
	if (this == &src)
		return (*this);

	return (*this);
}

void ScalarConverter::convert(const std::string& literal)
{
	std::string literal_copy = literal;
	int length = literal_copy.length();
	int flag_f = 0;
	int i = 0;
	int n_dots = 0;

	if (length > 1 && literal.back() == 'f') {
		literal_copy.resize(length-1);
		length = literal_copy.length();
		flag_f = 1;
	}
	const char* str = literal_copy.c_str();

	if (length == 1 && (str[0] >= 33 && str[0] <= 126)) {
		printChar(static_cast<char>(str[0]));
		printInt(static_cast<int>(str[0]));
		printFloat(static_cast<float>(str[0]), 0);
		printDouble(static_cast<double>(str[0]), 0);
		return ;
	}

	n_dots = countDots(str);
	if (n_dots > 1)
	{
		std::cerr << RED << "INVALID INPUT" << RESET << std::endl;
		return ;
	}

	while (str[i])
	{
		if (isdigit(str[i]) || str[i] == '.' || (str[0] == '+' || str[0] == '-'))
			i++;
		else
		{
			std::cerr << RED << "INVALID INPUT" << RESET << std::endl;
			return ;
		}
	}

	if (n_dots == 0)
	{
		try {
			int num = std::stoi(str);
			printChar(static_cast<char>(num));
			printInt(num);
			printFloat(static_cast<float>(num), 0);
			printDouble(static_cast<double>(num), 0);
		} catch (const std::invalid_argument& e) {
			convertToFloat(str);
			return ;
		} catch (const std::out_of_range& e) {
			convertToFloat(str);
			return ;
		}
	}
	else
	{
		int dotIndex = getDotIndex(str);
		int num_decimal_digits = (length-1) - dotIndex;
		if (num_decimal_digits > 7 && num_decimal_digits <= 15) {
			convertToDouble(str);
			return ;
		} else if (num_decimal_digits > 15) {
			printImpossibleConversion();
			return ;
		}
		convertToFloat(str);
	}
}
