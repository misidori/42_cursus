/*	data.h	*/

#ifndef DATA_H
# define DATA_H

#include <string>

#define RESET	"\033[0m"
#define BOLD	"\033[1m"
#define GREY	"\033[30m"
#define RED		"\033[31m"
#define GREEN	"\033[32m"
#define YELLOW	"\033[33m"

typedef struct Data
{
	int			value;
	std::string	text;

	std::ostream&	print(std::ostream& os) const;
} t_data;

std::ostream&	operator<<(std::ostream& os, const Data& data);

#endif
