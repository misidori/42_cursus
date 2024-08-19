/* AForm.hpp */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.h"
#include "AForm.h"

class Bureaucrat;

class AForm
{
private:
	const std::string	name;
	bool				is_signed;
	const int			signing_grade;
	const int			executing_grade;

public:
			AForm(std::string name, int signing_grade, int executing_grade);
			AForm(const AForm &src);
	virtual	~AForm();
	AForm&	operator=(const AForm &src);

	std::ostream&		print(std::ostream& os) const;

	virtual std::string	getName() const;
	bool				getSigned() const;
	int					getSigningGrade() const;
	int					getExecutingGrade() const;

	void				setSigned(bool sign);

	void				beSigned(Bureaucrat &bureaucrat);
	virtual void		execute(Bureaucrat const & executor) const = 0;

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

	class FormNotSignedException : public std::exception
	{
	public:
		const char* what() const throw();
	};
};

#endif
