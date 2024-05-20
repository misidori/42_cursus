/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:34:57 by matteo            #+#    #+#             */
/*   Updated: 2024/03/12 17:34:48 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

Dog::Dog() : Animal("Dog")
{
	std::cout << BLUE << "Dog constructor" << RESET << std::endl;
	brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Dog copy constructor" << std::endl;
	brain = new Brain(*other.brain);
}

Dog::~Dog()
{
	delete (brain);
	std::cout << GREY << "Dog destroyer" << RESET << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		delete (brain);
		brain = new Brain(*other.brain);
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << BOLD << "Bau!" << RESET << std::endl;
}
