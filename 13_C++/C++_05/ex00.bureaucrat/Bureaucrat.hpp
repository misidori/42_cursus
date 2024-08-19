/* Bureaucrat.hpp */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.h"

class Bureaucrat
{
private:
	const std::string	name;
	int	grade;

public:
				Bureaucrat(std::string name, int grade);
				Bureaucrat(const Bureaucrat &src);
				~Bureaucrat();
	Bureaucrat&	operator=(const Bureaucrat &src);

	std::ostream&	print(std::ostream& os) const;

	std::string		getName() const;
	int				getGrade() const;

	void			incrementGrade();
	void			decrementGrade();

public:
	class GradeTooHighException : public std::exception
	{
	public:
		const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char* what() const throw();
	};
};

#endif
