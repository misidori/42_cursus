/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:20:22 by matteo            #+#    #+#             */
/*   Updated: 2024/02/23 16:11:32 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

#include <iostream>
#include <string>
#include <cctype>

int main(void)
{
	Phonebook	Phonebook;
	Contact		new_contact;
	std::string	command;

	while (true)
	{
		std::cout << GREEN << "Type ADD, SEARCH or EXIT" << RESET << std::endl;
		std::cout << "Enter command: ";
		std::getline(std::cin, command);
		if (std::cin.eof())
			return (0);
		if (command == "ADD")
		{
			ft_add(Phonebook, new_contact);
		}
		else if (command == "SEARCH")
		{
			ft_search(Phonebook);
		}
		else if (command == "EXIT")
		{
			if (ft_exit() == 0)
				return (0);
		}
		else
			std::cout << RED << "INSERT A VALID COMMAND" << RESET << std::endl;
	}

	return (0);
}
