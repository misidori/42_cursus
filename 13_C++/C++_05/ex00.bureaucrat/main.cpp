/* main.cpp */

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.h"

int	main(void)
{
	try {
		Bureaucrat	ugo1 = Bureaucrat("Pippo", 0);
		std::cout << ugo1 << std::endl;
	} catch (std::exception & e) {
		std::cerr << RED << "ERROR Pippo: " << e.what() << RESET << std::endl;
	}

	try {
		Bureaucrat	ugo2 = Bureaucrat("Pluto", 1);
		std::cout << ugo2 << std::endl;
		ugo2.incrementGrade();
		std::cout << ugo2 << std::endl;
	} catch (std::exception & e) {
		std::cerr << RED << "ERROR Pluto: " << e.what() << RESET << std::endl;
	}

	try {
		Bureaucrat	ugo3 = Bureaucrat("Topolino", 10);
		std::cout << ugo3 << std::endl;
		ugo3.incrementGrade();
		std::cout << ugo3 << std::endl;
	} catch (std::exception & e) {
		std::cerr << RED << "ERROR Topolino: " << e.what() << RESET << std::endl;
	}

	try {
		Bureaucrat	ugo4 = Bureaucrat("Paperino", 150);
		std::cout << ugo4 << std::endl;
		ugo4.decrementGrade();
		std::cout << ugo4 << std::endl;
	} catch (std::exception & e) {
		std::cerr << RED << "ERROR Paperino: " << e.what() << RESET << std::endl;
	}

	try {
		Bureaucrat	ugo5 = Bureaucrat("Franco", 1500);
		std::cout << ugo5 << std::endl;
		ugo5.decrementGrade();
		std::cout << ugo5 << std::endl;
	} catch (std::exception & e) {
		std::cerr << RED << "ERROR Franco: " << e.what() << RESET << std::endl;
	}

	try {
		Bureaucrat	ugo6 = Bureaucrat("Ugo6", 10);
		Bureaucrat	ugo7 = Bureaucrat(ugo6);
		std::cout << ugo7 << std::endl;
		ugo7.decrementGrade();
		std::cout << ugo7 << std::endl;
	} catch (std::exception & e) {
		std::cerr << RED << "ERROR Ugo6: " << e.what() << RESET << std::endl;
	}

	return (0);
}
