/* main.cpp */

#include <iostream>
#include <string>
#include <exception>
#include "Form.h"
#include "Bureaucrat.h"

int	main(void)
{
	try {
		Bureaucrat	ugo = Bureaucrat("Fantozzi", 10);
		Form		form1 = Form("F24", 50, 25);
		Form		form2 = Form("730", 5, 2);

		std::cout << ugo << std::endl << std::endl;
		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl;

//		ugo.signForm(form1);
//		ugo.signForm(form1);
//		ugo.signForm(form2);

		std::cout << std::endl;

		try {
			form2.beSigned(ugo);
		} catch (const std::exception &e) {
			std::cerr << RED << e.what() << RESET << std::endl;
		}

	} catch (std::exception & e) {
		std::cerr << RED << "ERROR Fantozzi: " << e.what() << RESET << std::endl;
	}

	return (0);
}
