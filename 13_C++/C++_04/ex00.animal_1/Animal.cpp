/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:36:09 by matteo            #+#    #+#             */
/*   Updated: 2024/03/12 13:52:00 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

Animal::Animal()
{
	std::cout << BOLD BLUE << "Animal created" << RESET << std::endl;
}

Animal::Animal(const Animal& other)
	:	type(other.type)
{
	std::cout << "Animal copy constructor" << std::endl;
}

Animal::~Animal()
{
	std::cout << BOLD CYAN << "Animal destroyed" << RESET << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
	{
		type = other.type;
	}
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}
