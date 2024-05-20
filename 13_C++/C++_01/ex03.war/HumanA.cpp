/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:00:39 by misidori          #+#    #+#             */
/*   Updated: 2024/02/23 19:32:23 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

HumanA::HumanA(const std::string name, Weapon& weapon)
	:	name(name), weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack() const
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
