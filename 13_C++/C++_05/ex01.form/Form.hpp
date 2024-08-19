/* Form.hpp */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.h"
#include "Form.h"

class Bureaucrat;

class Form
{
private:
	const std::string	name;
	bool				is_signed;
	const int			signing_grade;
	const int			executing_grade;

public:
			Form(std::string name, int signing_grade, int executing_grade);
			Form(const Form &src);
			~Form();
	Form&	operator=(const Form &src);

	std::ostream&	print(std::ostream& os) const;

	std::string		getName() const;
	bool			getSigned() const;
	int				getSigningGrade() const;
	int				getExecutingGrade() const;

	void			setSigned();

	void			beSigned(Bureaucrat &bureaucrat);

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
