/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:51:46 by matteo            #+#    #+#             */
/*   Updated: 2024/03/12 14:08:00 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

int	main(void)
{
	std::string	answer;

	do
	{
		std::cout << std::endl << BOLD YELLOW << "[TEST_1] [TEST_2] [TEST_3] [EXIT]" RESET << std::endl;
		std::cout << std::endl << "Choose your test: ";
		std::getline(std::cin, answer);
		if (std::cin.eof())
			return (0);
		std::cout << std::endl;
		if (answer == "TEST_1")
		{
			ft_test_1();
		}
		else if (answer == "TEST_2")
		{
			ft_test_2();
		}
		else if (answer == "TEST_3")
		{
			ft_test_3();
		}
		else if (answer == "EXIT")
		{
			std::cout << GREEN << "GOODBYE!" << RESET << std::endl;
			return (0);
		}
		else
		{
			std::cout << BOLD RED << "WRONG SELECTION" << RESET << std::endl;
		}
	}
	while (answer != "TEST_1" || answer != "TEST_2" || answer != "TEST_3");

	return (0);
}
