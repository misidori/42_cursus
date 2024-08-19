/* AForm.cpp */

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.h"
#include "AForm.h"

AForm::AForm(std::string name, int signing_grade, int executing_grade)
	:	name(name), signing_grade(signing_grade), executing_grade(executing_grade)
{
	if (signing_grade < 1 || executing_grade < 1)
		throw AForm::GradeTooHighException();
	if (signing_grade > 150 || executing_grade > 150)
		throw AForm::GradeTooLowException();

	this->is_signed = false;
}

AForm::AForm(const AForm &src)
	:	name(src.name), is_signed(src.is_signed), signing_grade(src.signing_grade), executing_grade(src.executing_grade)
{
	std::cout << "AForm Copy Constructor called" << std::endl;
}

AForm::~AForm()
{
	std::cout << std::endl << BOLD GREY << "AForm " << getName() << " Destructor called" << RESET << std::endl;
}

AForm&	AForm::operator=(const AForm &src)
{
	if (this != &src)
	{
		this->is_signed = src.is_signed;
	}

	std::cout << "AForm Copy assignment operator called" << std::endl;

	return (*this);
}

std::ostream&	AForm::print(std::ostream& os) const
{
	os << getName() << std::endl;
	if (getSigned() == true)
		os << "Signed: true " << std::endl;
	else
		os << "Signed: false " << std::endl;
	os << "Signing grade: " << getSigningGrade() << std::endl;
	os << "Executing grade: " << getExecutingGrade() << std::endl;

	return (os);
}

std::ostream&	operator<<(std::ostream& os, const AForm& aform)
{
	return (aform.print(os));
}

std::string	AForm::getName() const
{
	return (this->name);
}

bool	AForm::getSigned() const
{
	return (this->is_signed);
}

int	AForm::getSigningGrade() const
{
	return (this->signing_grade);
}

int	AForm::getExecutingGrade() const
{
	return (this->executing_grade);
}

void	AForm::setSigned(bool sign)
{
	this->is_signed = sign;
}

void	AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (getSigned() == true)
		throw AForm::FormNotSignedException();
	if (bureaucrat.getGrade() > getSigningGrade())
		throw AForm::GradeTooLowException();

	std::cout << bureaucrat.getName() << " signed " << getName() << std::endl;
	is_signed = true;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("FORM EXCEPTION: grade too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("FORM EXCEPTION: grade too low");
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return ("FORM EXCEPTION: The form hasn't been signed yet");
}
