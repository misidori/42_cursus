/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:33:52 by matteo            #+#    #+#             */
/*   Updated: 2024/03/12 14:02:03 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

WrongCat::WrongCat()
	:	WrongAnimal()
{
	type = "WrongCat";
	std::cout << BOLD RED << "WrongCat created" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	std::cout << "WrongCat copy constructor" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << BOLD RED << "WrongCat destroyed" << RESET << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
	{
		WrongAnimal::operator=(other);
	}

	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat sound" << std::endl;
}
