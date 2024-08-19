/* ShrubberyCreationForm.cpp */

#include <iostream>
#include <string>
#include <exception>
#include <fstream>
#include "AForm.h"
#include "ShrubberyCreationForm.hpp"
#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: AForm("ShrubberyCreationForm", SHRUBBERY_SIGNING_GRADE, SHRUBBERY_EXECUTING_GRADE), target(target)
{
	setSigned(false);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
	: AForm(src), target(src.target)
{
	this->setSigned(src.getSigned());
	std::cout << "ShrubberyCreationForm Copy Constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << std::endl << BOLD GREY << ShrubberyCreationForm::getName() << " Destructor called" << RESET << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	if (this != &src)
	{
		this->target = src.target;
		this->setSigned(src.getSigned());
	}

	return (*this);
}

std::string	ShrubberyCreationForm::getName() const
{
	return (AForm::getName() + "_\"" + target + "\"");
}

std::string ShrubberyCreationForm::getTarget() const
{
	return (this->target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (getSigned() == false)
		throw ShrubberyCreationForm::FormNotSignedException();
	if (executor.getGrade() > getExecutingGrade())
		throw Bureaucrat::BureaucratNotAllowedException();

	std::ofstream file(getTarget() + "_shrubbery");

	if (file.is_open())
	{
		for (int i = 0; i < 2; i++) {
			file << "    *    \n";
			file << "   ***   \n";
			file << "  *****  \n";
			file << " ******* \n";
			file << "*********\n";
			file << "   |||   \n";
			if (i == 0)
				file << "\n";
		}
		file.close();
		std::cout << getTarget() + "_shrubbery" + " file was successfully created" <<std::endl;
	}
	else
		std::cout << "Error accoured while creating the file" << std::endl;
}
