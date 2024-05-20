/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:47:13 by misidori          #+#    #+#             */
/*   Updated: 2024/02/23 16:11:03 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_add(Phonebook& Phonebook, Contact&new_contact)
{
	std::cout << std::endl;
	if (ft_fill_field("Enter first name: ", new_contact) == -1
		|| ft_fill_field("Enter last name: ", new_contact) == -1
		|| ft_fill_field("Enter nickname: ", new_contact) == -1
		|| ft_fill_field("Enter phone number: ", new_contact) == -1
		|| ft_fill_field("Enter darkest secret: ", new_contact) == -1)
		return ;
	std::cout << std::endl;
	Phonebook.add_contact(new_contact);
}

void	ft_search(Phonebook& Phonebook)
{
	std::string	index_str;
	int			index_num;

	if (Phonebook.get_contact_count() > 0)
			{
				Phonebook.display_contacts();
				while (true)
				{
					std::cout << "Enter index of contact to display: ";
					std::getline(std::cin, index_str);
					if (std::cin.eof())
						return ;
					index_num = ft_valid_index(index_str);
					if (index_num > 0)
					{
						if (Phonebook.display_contact(index_num) == 0)
							break ;
					}
				}
			}
			else
				std::cout << YELLOW << "No contacts saved yet" << RESET << std::endl;
}

int	ft_exit()
{
	char	answer;

	std::cout << YELLOW << "IF YOU EXIT YOU'LL LOSE ALL THE CONTACTS" << RESET << std::endl;
	while (true)
	{
		std::cout << "Are you sure you want to exit (y/n)? ";
		std::cin >> answer;
		if (std::cin.eof())
			return (0);
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (answer == 'y')
		{
			return (0);
		}
		else if (answer == 'n')
			break ;
		else
			std::cout << RED << "Please insert either \"y\" or \"n\"" << RESET << std::endl;
	}
	return (1);
}
