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
	:	type("")
{
	std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(const std::string& type)
	:	type(type)
{
		std::cout << GREEN << "Animal constructor" << RESET << std::endl;
}

Animal::Animal(const Animal& other)
	:	type(other.type)
{
	std::cout << "Animal copy constructor" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
	{
		type = other.type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << RED << "Animal destroyer" << RESET << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << BOLD << "Animal sound" << BOLD << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}
