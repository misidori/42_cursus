/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:01:13 by matteo            #+#    #+#             */
/*   Updated: 2024/02/24 14:43:43 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.h"

int	main(void)
{
	Zombie*		new_zombie;
	std::string	name;
	std::string	answer;

	std::cout << "Insert name for a new zombie: ";
	std::getline(std::cin, name);
	if (std::cin.eof())
			return (0);
	new_zombie = newZombie(name);
	new_zombie->announce();

	while (true)
	{
		std::cout << std::endl;
		std::cout << "Do you want to create a new zombie (y/n)? ";
		std::getline(std::cin, answer);
		if (std::cin.eof())
		{
			delete (new_zombie);
			return (0);
		}
		if (answer == "y")
		{
			std::cout << "Insert name for a new zombie: ";
			std::getline(std::cin, name);
			if (std::cin.eof())
			{
				delete (new_zombie);
				return (0);
			}
			randomChump(name);
		}
		else if (answer == "n")
			break ;
		else
			std::cout << RED << "Please insert either \"y\" or \"n\"" << RESET << std::endl;
	}
	delete (new_zombie);

	return (0);
}
