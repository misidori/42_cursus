/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 00:15:50 by matteo            #+#    #+#             */
/*   Updated: 2024/02/24 14:35:17 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.h"

Zombie*	newZombie(const std::string name)
{
	Zombie	*new_zombie;

	new_zombie = new Zombie(name);
	std::cout << std::endl << RED << "OMG " << name << " the zombie has escaped!!!" << std::endl;
	return (new_zombie);
}
