/* Bureaucrat.cpp */

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.h"
#include "AForm.h"

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
	std::cout << std::endl << BOLD GREY << "Bureaucrat " << name << " Destructor called" << RESET << std::endl;
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
		throw GradeTooHighException();

	std::cout << GREEN << "Bureaucrat " << getName() << " got a promotion!" << RESET << std::endl;
}

void	Bureaucrat::decrementGrade()
{
	if (grade < 150)
		grade++;
	else
		throw GradeTooLowException();

	std::cout << RED << "Bureaucrat " << getName() << " was demoted!" << RESET << std::endl;
}

void Bureaucrat::signForm(AForm &AForm)
{
	if (AForm.getSigned() == false) {
		if (getGrade() <= AForm.getSigningGrade())
		{
			std::cout << name << " signed " << AForm.getName() << std::endl;
			AForm.setSigned(true);
		}
		else
			std::cout << name << " couldn’t sign " << AForm.getName() << " because " << name << "'s grade is too low" << std::endl;
	} else {
		std::cout << name << " couldn’t sign " << AForm.getName() << " because " << AForm << " it's already signed" << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & form)
{
	if (form.getSigned() == false)
	{
		std::cerr << this->getName() << " couldn't execute " << form.getName() << " because " << form.getName() << " it wasn't signed by a bureaucrat" << std::endl;
		return ;
	}
	if (getGrade() > form.getExecutingGrade())
	{
		std::cerr << this->getName() << " couldn't execute " << form.getName() << " because " << this->getName() << " has a low grade" << std::endl;
		return ;
	}

	std::cout << this->getName() << " executed " << form.getName() << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("BUREAUCRAT EXCEPTION: grade too high");

}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("BUREAUCRAT EXCEPTION: grade too low");
}

const char* Bureaucrat::BureaucratNotAllowedException::what() const throw()
{
	return ("EXCEPTION: Bureaucrat is not allow to work on this form");
}
