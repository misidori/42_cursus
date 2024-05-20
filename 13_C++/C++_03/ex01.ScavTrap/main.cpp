/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:57:14 by matteo            #+#    #+#             */
/*   Updated: 2024/03/14 23:13:26 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int	main(void)
{
	ScavTrap	player("Squall");
	std::string	answer;
	bool		use_shield = true;


	while (player.get_energy_points() > 0 && player.get_hit_points() > 0)
	{
		player.print_stats();
		std::cout << YELLOW << "[ATTACK] [BE REPAIRED] [GUARD GATE] [EXIT]" << RESET << std::endl;
		std::cout << "Choose your next move: ";
		std::getline(std::cin, answer);
		if (std::cin.eof())
			return (0);
		if (answer == "ATTACK")
		{
			player.decrease_energy_points();
			player.attack("Seifer");
			use_shield = false;
		}
		else if (answer == "BE REPAIRED")
		{
			player.decrease_energy_points();
			player.beRepaired(3);
			use_shield = false;
		}
		else if (answer == "GUARD GATE")
		{
			player.guardGate();
			use_shield = true;
		}
		else if (answer == "EXIT")
			break ;
		else
		{
			std::cout << RED << "WRONG ANSWER!" << std::endl;
			use_shield = true;
		}
		if (use_shield == false)
			player.takeDamage(6);
		if (player.get_energy_points() <= 0)
		{
			std::string	player_name = player.get_name();
			std::cout << RED << player_name << " is exhausted. He can't continue the adventure" << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << RED << "GAME OVER" << std::endl;
	return (0);
}
