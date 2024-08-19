#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class AForm;

class Bureaucrat
{
private:
	const std::string	name;
	int					grade;

public:
					Bureaucrat(std::string name, int grade);
					Bureaucrat(const Bureaucrat &src);
					~Bureaucrat();
	Bureaucrat&		operator=(const Bureaucrat &src);

	std::ostream&	print(std::ostream& os) const;

	std::string		getName() const;
	int				getGrade() const;

	void			incrementGrade();
	void			decrementGrade();

	void			signForm(AForm &AForm);
	void			executeForm(AForm const & form);

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

	class BureaucratNotAllowedException : public std::exception
	{
	public:
		const char* what() const throw();
	};
};

#endif
