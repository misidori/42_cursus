/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:00:43 by misidori          #+#    #+#             */
/*   Updated: 2024/02/23 19:32:25 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "header.h"

class HumanA
{
private:
	std::string	name;
	Weapon&		weapon;

public:
	HumanA(const std::string name, Weapon& weapon);
	~HumanA();

	void	attack() const;
};

#endif
