/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 00:15:12 by matteo            #+#    #+#             */
/*   Updated: 2024/02/23 19:07:29 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.h"

int	main(void)
{
	Zombie		*zombie_horde;
	std::string	name;
	std::string	input;
	int			n_zombies = 0;

	while (true)
	{
		std::cout << "How many zombies do you want to create? ";
		n_zombies = ft_get_number(input);
		if (n_zombies < 0)
		{
			std::cout << RED << "Insert a valid number" << RESET << std::endl;
		}
		else if (n_zombies == 0)
		{
			std::cout << "\nThe program is shutting down\n";
			sleep(1);
			std::cout << "\nThe program is closed\n";
			return (0);
		}
		else
			break ;
	}
	std::cout << std::endl;
	std::cout << "How do you want them to be named? ";
	std::getline(std::cin, name);
	if (std::cin.eof())
		return (0);
	std::cout << std::endl;

	zombie_horde = zombieHorde(n_zombies, name);

	delete[] zombie_horde;

	return (0);
}
