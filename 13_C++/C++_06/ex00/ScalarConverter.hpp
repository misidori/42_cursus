/*	ScalarConverter.hpp	*/

#ifndef SCALACONVERTER_HPP
# define SCALACONVERTER_HPP

class ScalarConverter
{
private:
						ScalarConverter();
						~ScalarConverter();
						ScalarConverter(const ScalarConverter& src);
	ScalarConverter&	operator=(const ScalarConverter& src);
public:
	static void			convert(const std::string& literal);
};

#endif
