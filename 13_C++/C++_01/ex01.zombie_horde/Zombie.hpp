/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 00:15:05 by matteo            #+#    #+#             */
/*   Updated: 2024/02/23 18:06:37 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <unistd.h>
#include "zombie.h"

#define RESET	"\033[0m"
#define GREY	"\033[30m"
#define RED		"\033[31m"
#define GREEN	"\033[32m"
#define YELLOW	"\033[33m"

class Zombie
{
private:
	std::string	name;

public:
			Zombie();
			Zombie(const std::string& name);
			~Zombie();

	void	announce();
};

#endif
