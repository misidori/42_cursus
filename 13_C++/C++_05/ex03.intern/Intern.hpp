/* Intern.hpp */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Intern.h"
#include "AForm.h"

class AForm;

class Intern
{

public:
			Intern();
			Intern(const Intern &src);
			~Intern();
	Intern&	operator=(const Intern &src);

	AForm*	makeForm(std::string name, std::string target);
};

#endif
