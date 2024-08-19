/* main.cpp */

#include <iostream>
#include <string>
#include <exception>
#include "AForm.h"
#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

int	main(void)
{
	try {
		Bureaucrat				ugo = Bureaucrat("Fantozzi", 150);
		ShrubberyCreationForm	form1 = ShrubberyCreationForm("home");
		RobotomyRequestForm		form2 = RobotomyRequestForm("homer");
		PresidentialPardonForm	form3 = PresidentialPardonForm("simpson");

		std::cout << ugo << std::endl << std::endl;
		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl;
		std::cout << form3 << std::endl;

		ugo.signForm(form1);
		ugo.signForm(form2);
		ugo.signForm(form3);

		std::cout << std::endl;

		try {
			form1.beSigned(ugo);
		} catch (const std::exception &e) {
			std::cerr << RED << e.what() << RESET << std::endl;
		}

		std::cout << std::endl;

		try {
			form1.execute(ugo);
		} catch (const std::exception &e) {
			std::cerr << RED << e.what() << RESET << std::endl;
		}

		try {
			form2.execute(ugo);
		} catch (const std::exception &e) {
			std::cerr << RED << e.what() << RESET << std::endl;
		}

		try {
			form3.execute(ugo);
		} catch (const std::exception &e) {
			std::cerr << RED << e.what() << RESET << std::endl;
		}

		std::cout << std::endl;

		ugo.executeForm(form1);
		ugo.executeForm(form2);
		ugo.executeForm(form3);

	} catch (const std::exception &e) {
		std::cerr << RED << e.what() << RESET << std::endl;
	}

}
