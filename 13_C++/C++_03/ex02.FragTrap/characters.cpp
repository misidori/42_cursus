/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   characters.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 23:01:44 by matteo            #+#    #+#             */
/*   Updated: 2024/03/14 23:15:36 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

void	ft_clap_trap()
{
	ClapTrap	player("ClapTrap");
	std::string	answer;
	bool		use_shield = true;

	while (player.get_energy_points() > 0 && player.get_hit_points() > 0)
	{
		player.print_stats();
		std::cout << YELLOW << "[ATTACK] [BE REPAIRED] [EXIT]" << RESET << std::endl;
		std::cout << "Choose your next move: ";
		std::getline(std::cin, answer);
		if (std::cin.eof())
			return ;
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
		else if (answer == "EXIT")
			break ;
		else
		{
			std::cout << RED << "WRONG ANSWER!" << std::endl;
			use_shield = true;
		}
		if (use_shield == false)
			player.takeDamage(2);
		if (player.get_energy_points() <= 0)
		{
			std::string	player_name = player.get_name();
			std::cout << RED << player_name << " is exhausted. He can't continue the adventure" << std::endl;
		}
	}
}

void	ft_scav_trap()
{
	ScavTrap	player("ScavTrap");
	std::string	answer;
	bool		use_shield = true;

	while (player.get_energy_points() > 0 && player.get_hit_points() > 0)
	{
		player.print_stats();
		std::cout << YELLOW << "[ATTACK] [BE REPAIRED] [GUARD GATE] [EXIT]" << RESET << std::endl;
		std::cout << "Choose your next move: ";
		std::getline(std::cin, answer);
		if (std::cin.eof())
			return ;
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
}

void	ft_frag_trap()
{
	FragTrap	player("FragTrap");
	std::string	answer;
	bool		use_shield = true;

	while (player.get_energy_points() > 0 && player.get_hit_points() > 0)
	{
		player.print_stats();
		std::cout << YELLOW << "[ATTACK] [BE REPAIRED] [HIGH FIVE GUYS] [EXIT]" << RESET << std::endl;
		std::cout << "Choose your next move: ";
		std::getline(std::cin, answer);
		if (std::cin.eof())
			return ;
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
		else if (answer == "HIGH FIVE GUYS")
		{
			player.highFivesGuys();
			use_shield = false;
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
}
