/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:00:45 by misidori          #+#    #+#             */
/*   Updated: 2024/02/23 19:22:54 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

Weapon::Weapon(const std::string type)
	:	type(type)
{
}
Weapon::~Weapon()
{
}

std::string	Weapon::getType() const
{
	return (type);
}
void	Weapon::setType(const std::string& new_type)
{
	this->type = new_type;
}
