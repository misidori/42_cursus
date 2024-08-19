/* RobotomyRequestForm.cpp */

#include <iostream>
#include <string>
#include <exception>
#include <cstdlib>
#include <ctime>
#include "AForm.h"
#include "RobotomyRequestForm.hpp"
#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: AForm("RobotomyRequestForm", ROBOTOMY_SIGNING_GRADE, ROBOTOMY_EXECUTING_GRADE), target(target)
{
	setSigned(false);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
	: AForm(src), target(src.target)
{
	this->setSigned(src.getSigned());
	std::cout << "RobotomyRequestForm Copy Constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << std::endl << BOLD GREY << RobotomyRequestForm::getName() << " Destructor called" << RESET << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	if (this != &src)
	{
		this->target = src.target;
		this->setSigned(src.getSigned());
	}

	return (*this);
}

std::string	RobotomyRequestForm::getName() const
{
	return (AForm::getName() + "_\"" + target + "\"");
}

std::string	RobotomyRequestForm::getTarget() const
{
	return (this->target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (getSigned() == false)
		throw FormNotSignedException();
	if (executor.getGrade() > getExecutingGrade())
		throw GradeTooLowException();

	std::srand(std::time(0));
	int	randomValue = std::rand() % 2;

	if (randomValue == 0) {
		std::cout << getTarget() << " has been robotomized successfully" << std::endl;
	} else {
		std::cout << "The robotomy failed" << std::endl;
	}
}
