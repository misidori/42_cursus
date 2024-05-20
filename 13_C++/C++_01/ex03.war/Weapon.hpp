/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:00:48 by misidori          #+#    #+#             */
/*   Updated: 2024/02/23 19:21:55 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include "header.h"

class Weapon
{
private:
	std::string	type;

public:
	Weapon(const std::string type);
	~Weapon();

	std::string	getType() const;
	void		setType(const std::string& new_type);
};

#endif
