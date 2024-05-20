/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:46:28 by misidori          #+#    #+#             */
/*   Updated: 2024/02/23 13:14:50 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

Phonebook::Phonebook()
	:	oldest_contact_index(0), contact_count(0)
{
}

Phonebook::~Phonebook()
{
	std::cout << "\nMemory being freed\n";
	sleep(1);
	std::cout << "\nThe program is shutting down\n";
	sleep(1);
	std::cout << "\nThe program is closed\n";
}

int		Phonebook::get_contact_count() const
{
	return (contact_count);
}

void	Phonebook::add_contact(Contact new_contact)
{
	contacts[oldest_contact_index] = new_contact;
	oldest_contact_index = (oldest_contact_index + 1) % 8;
	if (contact_count < 8)
	{
		contact_count++;
	}
}

void	Phonebook::display_contacts()
{
	int	i;

	i = 0;
	while (i < contact_count)
	{
		if (i == 0)
			std::cout << std::endl;
		std::string	first_name = contacts[i].get_first_name();
		std::string	last_name = contacts[i].get_last_name();
		std::string	nickname = contacts[i].get_nickname();

		if (first_name.length() > 10)
			first_name = first_name.substr(0, 9) + ".";
		if (last_name.length() > 10)
			last_name = last_name.substr(0, 9) + ".";
		if (nickname.length() > 10)
			nickname = nickname.substr(0, 9) + ".";

		std::cout << std::right << std::setw(10) << i + 1 << " | "
				<< std::setw(10) << first_name << " | "
				<< std::setw(10) << last_name << " | "
				<< std::setw(10) << nickname << std::endl;
		if (i == contact_count - 1)
			std::cout << std::endl;
		i++;
	}
}

int		Phonebook::display_contact(int index)
{
	index--;
	if (index >= 0 && index < contact_count)
	{
		std::string	first_name = contacts[index].get_first_name();
		std::string	last_name = contacts[index].get_last_name();
		std::string	nickname = contacts[index].get_nickname();
		std::string	phone_number = contacts[index].get_phone_number();
		std::string	darkest_secret = contacts[index].get_darkest_secret();
		
		std::cout << std::endl;
		std::cout << "First name: " << first_name << std::endl;
		std::cout << "Last name: " << last_name << std::endl;
		std::cout << "Nickname: " << nickname << std::endl;
		std::cout << "Phone number: " << phone_number << std::endl;
		std::cout << "Darkest secret: " << darkest_secret << std::endl;
		std::cout << std::endl;
		return (0);
	}
	else
	{
		std::cout << RED << "Invalid index" << RESET << std::endl;
		return (1);
	}
}
