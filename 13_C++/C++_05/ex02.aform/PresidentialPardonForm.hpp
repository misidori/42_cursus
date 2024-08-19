/* PresidentialPardonForm.hpp */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "AForm.h"

class AForm;

class PresidentialPardonForm : public AForm
{
private:
	std::string	target;

public:
							PresidentialPardonForm(std::string target);
							PresidentialPardonForm(const PresidentialPardonForm &src);
							~PresidentialPardonForm();
	PresidentialPardonForm&	operator=(const PresidentialPardonForm &src);

	std::string	getName() const;
	std::string	getTarget() const;

	void		execute(Bureaucrat const & executor) const;
};

#endif
