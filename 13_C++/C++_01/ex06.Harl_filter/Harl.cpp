/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 20:29:41 by misidori          #+#    #+#             */
/*   Updated: 2024/05/20 11:39:23 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.h"

void Harl::debug(void)
{
	std::cout << BOLD << "[ DEBUG ]\ndebug message\n" << RESET << std::endl;
}
void Harl::info(void)
{
	std::cout << BOLD GREEN << "[ INFO ]\ninfo message\n" << RESET << std::endl;
}
void Harl::warning(void)
{
	std::cout << BOLD YELLOW << "[ WARNING ]\nwarning message\n" << RESET << std::endl;
}
void Harl::error(void)
{
	std::cout << BOLD RED << "[ ERROR ]\nerror message\n" << RESET << std::endl;
}

void Harl::complain(std::string level)
{
	int			parameter = ft_get_switch_parameter(level);
	void		(Harl::*Function[4])() =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	switch (parameter)
	{
		case 0:
			while (parameter < 4)
			{
				(this->*Function[parameter])();
				parameter++;
			}
			break ;
		case 1:
			while (parameter < 4)
			{
				(this->*Function[parameter])();
				parameter++;
			}
			break ;
		case 2:
			while (parameter < 4)
			{
				(this->*Function[parameter])();
				parameter++;
			}
			break ;
		case 3:
			(this->*Function[parameter])();
			break ;
		default:
			std::cout << RED << "Insert ./harlFilter and one of the levels:\nDEBUG\nINFO\nWARNING\nERROR" << RESET << std::endl;
	}
}
