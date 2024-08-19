/* RobotomyRequestForm.hpp */

#ifndef ROBOTOMYCREATIONFORM_HPP
# define ROBOTOMYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "AForm.h"

class AForm;

class RobotomyRequestForm : public AForm
{
private:
	std::string	target;

public:
							RobotomyRequestForm(std::string target);
							RobotomyRequestForm(const RobotomyRequestForm &src);
							~RobotomyRequestForm();
	RobotomyRequestForm&	operator=(const RobotomyRequestForm &src);

	std::string	getName() const;
	std::string	getTarget() const;

	void		execute(Bureaucrat const & executor) const;
};

#endif
