/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 09:56:06 by matteo            #+#    #+#             */
/*   Updated: 2024/02/23 15:02:01 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

#include <iostream>
#include <string>
#include <iomanip>
#include <unistd.h>
#include "Contact.hpp"
#include "Phonebook.hpp"

#define RESET	"\033[0m"
#define GREY	"\033[30m"
#define RED		"\033[31m"
#define GREEN	"\033[32m"
#define YELLOW	"\033[33m"

/*		COMMANDS.CPP	*/

void	ft_add(Phonebook& Phonebook, Contact&new_contact);
void	ft_search(Phonebook& Phonebook);
int		ft_exit();

/*		UTILS.CPP	*/

int		ft_fill_field(std::string prompt, Contact& new_contact);
bool	ft_valid_phone_number(const std::string& str);
int		ft_valid_index(std::string index_str);

#endif
