/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:20:44 by matteo            #+#    #+#             */
/*   Updated: 2024/03/12 16:08:51 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

Brain::Brain()
{
	int	i = 0;

	while (i < 100)
	{
		ideas[i] = "";
		i++;
	}
	std::cout << BOLD BLUE << "Brain created" << RESET << std::endl;
}

Brain::Brain(const Brain& other)
{
	int	i = 0;

	while (i < 100)
	{
		ideas[i] = other.ideas[i];
		i++;
	}
	std::cout << "Brain copy constructor" << std::endl;
}

Brain::~Brain()
{
	std::cout << BOLD BLUE << "Brain destroyed" << RESET << std::endl;
}

Brain&	Brain::operator=(const Brain& other)
{
	int	i = 0;

	if (this != &other)
	{
		while (i < 100)
		{
			ideas[i] = other.ideas[i];
			i++;
		}
	}
	return (*this);
}
