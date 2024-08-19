/* PresidentialPardonForm.cpp */

#include <iostream>
#include <string>
#include <exception>
#include "AForm.h"
#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	:	AForm("PresidentialPardonForm", PRESIDENTIALPARDON_SIGNING_GRADE, PRESIDENTIALPARDON_EXECUTING_GRADE), target(target)
{
	setSigned(false);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
	: AForm(src), target(src.target)
{
	this->setSigned(src.getSigned());
	std::cout << "PresidentialPardonForm Copy Constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << std::endl << BOLD GREY << PresidentialPardonForm::getName() << " Destructor called" << RESET << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	if (this != &src)
	{
		this->target = src.target;
		this->setSigned(src.getSigned());
	}

	return (*this);
}

std::string	PresidentialPardonForm::getName() const
{
	return (AForm::getName() + "_\"" + target + "\"");
}

std::string	PresidentialPardonForm::getTarget() const
{
	return (this->target);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (getSigned() == false)
		throw FormNotSignedException();
	if (executor.getGrade() > getExecutingGrade())
		throw Bureaucrat::BureaucratNotAllowedException();

	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
