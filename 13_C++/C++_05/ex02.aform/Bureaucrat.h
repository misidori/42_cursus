/* Bureaucrat.h */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

#define RESET	"\033[0m"
#define BOLD	"\033[1m"
#define GREY	"\033[30m"
#define RED		"\033[31m"
#define GREEN	"\033[32m"
#define YELLOW	"\033[33m"

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif
