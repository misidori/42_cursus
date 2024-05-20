/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:01:17 by matteo            #+#    #+#             */
/*   Updated: 2024/02/23 19:09:54 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.h"

static int	ft_valid_number(std::string index_str)
{
	bool	is_number = true;
	int		index_num = 0;
	int		i = 0;

	while (i < ((int) index_str.size()))
	{
		if (!isdigit(index_str[i]))
		{
			is_number = false;
			break;
		}
		++i;
	}
	if (is_number == true)
		index_num = std::atoi(index_str.c_str());
	else
	{
		std::cout << RED << "Insert a valid number" << RESET << std::endl;
		return (0);
	}
	if (index_num >= 0)
		return (index_num);
	else
	{
		std::cout << RED << "Insert a valid number" << RESET << std::endl;
		return (0);
	}
}

int	ft_get_number(std::string input)
{
	int	number = 0;

	std::getline(std::cin, input);
	if (std::cin.eof())
		exit(0);
	number = ft_valid_number(input);

	return (number);
}
