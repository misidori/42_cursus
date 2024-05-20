/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:35:01 by matteo            #+#    #+#             */
/*   Updated: 2024/03/12 17:34:42 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

Cat::Cat() : Animal("Cat")
{
	std::cout << YELLOW << "Cat constructor" << RESET << std::endl;
	brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat copy constructor" << std::endl;
	brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		delete (brain);
		brain = new Brain(*other.brain);
	}

	return (*this);
}

Cat::~Cat()
{
	delete (brain);
	std::cout << GREY << "Cat destroyer" << RESET << std::endl;
}

void Cat::makeSound() const
{
	std::cout << BOLD << "Miao!" << RESET << std::endl;
}
