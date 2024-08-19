/* Intern.cpp */

#include <iostream>
#include <string>
#include <exception>
#include "Intern.h"
#include "AForm.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

Intern::Intern()
{
	std::cout << "Intern hired!" << std::endl;
}

Intern::Intern(const Intern &src)
{
	*this = src;
	std::cout << "Intern Copy Constructor called" << std::endl;
}

Intern::~Intern()
{
	std::cout << std::endl << BOLD GREY << "Intern Destructor called" << RESET << std::endl;
}

Intern&	Intern::operator=(const Intern& src)
{
	if (this != &src)
	{}

	std::cout << "Intern Copy assignment operator called" << std::endl;

	return (*this);
}

AForm*	Intern::makeForm(std::string form_name, std::string form_target)
{
	AForm*		form = 0;
	std::string	forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int			i = 0;
	char		first_letter_form = 0;

	while (form_name[i] != '\0')
	{
		if (form_name[i] >= 65 && form_name[i] <= 90)
			std::tolower(form_name[i]);
		i++;
	}

	for (int i = 0; i < 3; i++)
	{
		if (form_name.compare(forms[i]) == 0)
		{
			first_letter_form = forms[i][0];
			break ;
		}
	}

	switch (first_letter_form)
	{
		case 's':
			form = new ShrubberyCreationForm(form_target);
			break ;
		case 'r':
			form = new RobotomyRequestForm(form_target);
			break ;
		case 'p':
			form = new PresidentialPardonForm(form_target);
			break ;
		default:
			std::cout << "Intern didn't create a new form" << std::endl;
			return (form);
	}

	std::cout << "Intern creates " << form->getName() << std::endl;

	return (form);
}
