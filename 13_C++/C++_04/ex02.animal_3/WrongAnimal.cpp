/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:34:45 by matteo            #+#    #+#             */
/*   Updated: 2024/03/12 13:50:10 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

WrongAnimal::WrongAnimal()
{
	std::cout << BOLD RED << "WrongAnimal created" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
	:	type(other.type)
{
	std::cout << "WrongAnimal copy constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << BOLD RED << "WrongAnimal destroyed" << RESET << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other)
	{
		type = other.type;
	}
	return (*this);
}

void	WrongAnimal::makeSound() const
{
std::cout << "WrongAnimal sound"<< std::endl;
}

std::string	WrongAnimal::getType() const
{
return (type);
}
