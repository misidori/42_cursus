/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 00:15:09 by matteo            #+#    #+#             */
/*   Updated: 2024/02/23 18:38:50 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.h"

Zombie::Zombie()
	:	name("")
{
}

Zombie::Zombie(const std::string& name)
	:	name(name)
{
	std::cout << GREEN << "Congratulations, Dr. Frankenstein! You created " << name << ", a zombie!" << RESET << std::endl;
}
Zombie::~Zombie()
{
	sleep(1);
	std::cout << std::endl << RED << "BANG!!! HEADSHOT! " << name << " the zombie died!" << RESET << std::endl;
}
