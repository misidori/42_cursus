/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:00:35 by misidori          #+#    #+#             */
/*   Updated: 2024/02/23 19:21:47 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "header.h"

class HumanB
{
private:
	std::string	name;
	Weapon*		weapon;

public:
	HumanB(const std::string name);
	~HumanB();

	void	setWeapon(Weapon& new_weapon);
	void	attack() const;
};

#endif
