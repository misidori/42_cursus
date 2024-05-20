/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:57:14 by matteo            #+#    #+#             */
/*   Updated: 2024/03/03 23:34:35 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int	main(void)
{
	std::string	answer;

	std::cout << BOLD YELLOW << "[CLAPTRAP] [SCAVTRAP] [FRAGTRAP]" << RESET << std::endl;
	std::cout << BOLD << "CHOOSE YOUR CHARACTER: " << RESET;
	std::getline(std::cin, answer);
	if (std::cin.eof())
		return (0);
	if (answer == "CLAPTRAP")
	{
		ft_clap_trap();
	}
	else if (answer == "SCAVTRAP")
	{
		ft_scav_trap();
	}
	else if (answer == "FRAGTRAP")
	{
		ft_frag_trap();
	}
	else
		std::cout << std::endl << RED << "LEARN HOW TO WRITE ON A KEYBOARD!" << std::endl;
	std::cout << std::endl << RED << "GAME OVER" << std::endl;
	return (0);
}
