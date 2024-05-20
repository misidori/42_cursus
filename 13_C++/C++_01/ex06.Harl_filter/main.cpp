/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 19:03:27 by misidori          #+#    #+#             */
/*   Updated: 2024/02/24 14:16:04 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.h"

int	main(int argc, char **argv)
{
	Harl	harl;

	if (argc != 2)
	{
		std::cerr << RED << "Wrong parameters" << RESET << std::endl;
		return (1);
	}

	harl.complain(argv[1]);

	return (0);
}

int	ft_get_switch_parameter(std::string levels)
{
	int	parameter;

	if (levels == "DEBUG")
		parameter = 0;
	else if (levels == "INFO")
		parameter = 1;
	else if (levels == "WARNING")
		parameter = 2;
	else if (levels == "ERROR")
		parameter = 3;
	else
		parameter = 10;

	return (parameter);
}
