/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:01:17 by matteo            #+#    #+#             */
/*   Updated: 2024/02/23 16:22:30 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

bool	ft_valid_phone_number(const std::string& str)
{
	char	c;
	int		i = 1;

	if (str[0] != '+' && !std::isdigit(str[0]))
	{
		return (false);
	}
	while (i < ((int) str.size()))
	{
		c = str[i];
		if (!std::isdigit(c))
		{
			return false;
		}
		i++;
	}
	return (true);
}

int	ft_valid_index(std::string index_str)
{
	bool			is_number = true;
	int				index_num = 0;
	int				i = 0;

	while (i < ((int) index_str.size()))
	{
		if (!std::isdigit(index_str[i]))
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
		std::cout << RED << "Invalid index" << RESET << std::endl;
		return (0);
	}
	if (index_num > 0)
		return (index_num);
	else
	{
		std::cout << RED << "Invalid index" << RESET << std::endl;
		return (0);
	}
}

int	ft_fill_field(std::string prompt, Contact& new_contact)
{
	std::string	field;

	std::cout << prompt;
	std::getline(std::cin, field);
	if (std::cin.eof())
			return (-1);

	if (prompt == "Enter first name: ")
		new_contact.set_first_name(field);
	else if (prompt == "Enter last name: ")
		new_contact.set_last_name(field);
	else if (prompt == "Enter nickname: ")
		new_contact.set_nickname(field);
	else if (prompt == "Enter darkest secret: ")
		new_contact.set_darkest_secret(field);
	else if (prompt == "Enter phone number: ")
	{
		while (ft_valid_phone_number(field) == false)
		{
			std::cout << RED << "Number not valid" << RESET << std::endl;
			std::cout << "Insert phone number: ";
			std::getline(std::cin, field);
			if (std::cin.eof())
				return (-1);
		}
		new_contact.set_phone_number(field);
	}

	return (0);
}
