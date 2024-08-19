/* ShrubberyCreationForm.hpp */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "AForm.h"

class AForm;

class ShrubberyCreationForm : public AForm
{
private:
	std::string target;

public:
				ShrubberyCreationForm(std::string target);
				ShrubberyCreationForm(const ShrubberyCreationForm &src);
							~ShrubberyCreationForm();
	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm &src);

	std::string	getName() const;
	std::string	getTarget() const;

	void		execute(Bureaucrat const & executor) const;
};

#endif
