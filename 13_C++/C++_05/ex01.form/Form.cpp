/* Form.cpp */

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.h"
#include "Form.h"

Form::Form(std::string name, int signing_grade, int executing_grade)
	:	name(name), is_signed(false), signing_grade(signing_grade), executing_grade(executing_grade)
{}

Form::Form(const Form &src)
	:	name(src.name), is_signed(src.is_signed), signing_grade(src.signing_grade), executing_grade(src.executing_grade)
{
	std::cout << "Form Copy Constructor called" << std::endl;
}

Form::~Form()
{
	std::cout << std::endl << BOLD GREY << "Form " << getName() << " Destructor called" << RESET << std::endl;
}

Form&	Form::operator=(const Form &src)
{
	if (this != &src)
	{
		this->is_signed = src.is_signed;
	}

	std::cout << "Form Copy assignment operator called" << std::endl;

	return (*this);
}

std::ostream&	Form::print(std::ostream& os) const
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

std::ostream&	operator<<(std::ostream& os, const Form& form)
{
	return (form.print(os));
}

std::string	Form::getName() const
{
	return (this->name);
}

bool	Form::getSigned() const
{
	return (this->is_signed);
}

int	Form::getSigningGrade() const
{
	return (this->signing_grade);
}

int	Form::getExecutingGrade() const
{
	return (this->executing_grade);
}

void	Form::setSigned()
{
	this->is_signed = true;
}

void	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (getSigned() == true)
	{
		std::cout << bureaucrat.getName() << " couldn’t sign " << getName() << " because " << getName() << " it's already signed" << std::endl;
		return ;
	}

	if (bureaucrat.getGrade() > getSigningGrade())
		throw Bureaucrat::GradeTooLowException();
	else
	{
		setSigned();
		std::cout << bureaucrat.getName() << " signed " << getName() << std::endl;
	}
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("FORM EXCEPTION: grade too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("FORM EXCEPTION: grade too low");
}
