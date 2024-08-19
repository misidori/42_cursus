/* Bureaucrat.cpp */

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.h"
#include "Form.h"

Bureaucrat::Bureaucrat(std::string name, int grade)
	:	name(name), grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	std::cout << "Bureaucrat Copy Constructor called" << std::endl;
	*this = src;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << std::endl << BOLD GREY << "Bureaucrat " << getName() << " Destructor called" << RESET << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& src)
{
	if (this != &src)
	{
		this->grade = src.getGrade();
	}

	std::cout << "Bureaucrat Copy assignment operator called" << std::endl;

	return (*this);
}

std::ostream&	Bureaucrat::print(std::ostream& os) const
{
	os << getName() << ", bureaucrat grade " << getGrade();
	return (os);
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
	return (bureaucrat.print(os));
}

std::string	Bureaucrat::getName() const
{
	return (this->name);
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

void	Bureaucrat::incrementGrade()
{
	if (grade > 1)
		grade--;
	else
		throw Bureaucrat::GradeTooHighException();

	std::cout << GREEN << "Bureaucrat " << getName() << " got a promotion!" << RESET << std::endl;
}

void	Bureaucrat::decrementGrade()
{
	if (grade < 150)
		grade++;
	else
		throw Bureaucrat::GradeTooLowException();

	std::cout << RED << "Bureaucrat " << getName() << " was demoted!" << RESET << std::endl;
}

void Bureaucrat::signForm(Form &form)
{
	if (form.getSigned() == true)
	{
		std::cout << getName() << " couldn’t sign " << form.getName() << " because " << form.getName() << " it's already signed" << std::endl;
		return ;
	}
	if (getGrade() > form.getSigningGrade())
	{
		std::cout << getName() << " couldn’t sign " << form.getName() << " because " << getName() << "'s grade is too low" << std::endl;
		return ;
	}

	std::cout << getName() << " signed " << form.getName() << std::endl;
	form.setSigned();
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("BUREAUCRAT EXCEPTION: grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("BUREAUCRAT EXCEPTION: grade too low");
}
