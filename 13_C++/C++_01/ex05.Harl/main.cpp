/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:27:18 by misidori          #+#    #+#             */
/*   Updated: 2024/02/24 14:03:54 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.h"

int	main(void)
{
	Harl		harl;
	std::string	level;

	while (true)
	{
		std::cout << "Insert your Level as input.\nChoose between:\n- debug\n- info\n- warning\n- error" << std::endl;
		std::cout << "Insert: " << RESET;
		std::getline(std::cin, level);
		if (std::cin.eof())
				return (0);
		if (level != "debug" && level != "info" && level != "warning" && level != "error")
			std::cout << RED << "Insert an existing level" << RESET << std::endl;
		else
			break ;
	}
	harl.complain(level);
	return (0);
}
