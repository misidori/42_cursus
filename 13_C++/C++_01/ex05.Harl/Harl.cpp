/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:26:43 by misidori          #+#    #+#             */
/*   Updated: 2024/02/24 15:04:27 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.h"

Harl::Harl()
{
}
Harl::~Harl()
{
}
void Harl::debug(void)
{
	std::cout << BOLD << "[ DEBUG MESSAGE ]" << RESET << std::endl;
}
void Harl::info(void)
{
	std::cout << BOLD GREEN << "[ INFO MESSAGE ]" << RESET << std::endl;
}
void Harl::warning(void)
{
	std::cout << BOLD YELLOW << "[ WARNING MESSAGE ]" << RESET << std::endl;
}
void Harl::error(void)
{
	std::cout << BOLD RED << "[ ERROR MESSAGE ]" << RESET << std::endl;
}

void Harl::complain(std::string level)
{
	int			i = 0;
	void		(Harl::*Function[4])() =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	std::string	levels[4] =
	{
		"debug",
		"info",
		"warning",
		"error"
	};

	while (i < 4)
	{
		if (level == levels[i])
		{
			(this->*Function[i])();
				return ;
		}
		i++;
	}
}
