#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Form;

class Bureaucrat
{
private:
	const std::string	name;
	int	grade;

public:
					Bureaucrat(std::string name, int grade);
					Bureaucrat(const Bureaucrat &src);
					~Bureaucrat();
	Bureaucrat&		operator=(const Bureaucrat &src);

	std::string		getName() const;
	int				getGrade() const;

	std::ostream&	print(std::ostream& os) const;

	void			incrementGrade();
	void			decrementGrade();

	void			signForm(Form &form);

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
