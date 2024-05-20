/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:57:00 by matteo            #+#    #+#             */
/*   Updated: 2024/03/14 18:42:50 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.h"

class ScavTrap : virtual public ClapTrap
{
public:
				ScavTrap();
				ScavTrap(std::string name);
				ScavTrap(const ScavTrap& other);
				~ScavTrap();

	ScavTrap&	operator=(const ScavTrap& obj);

	void		guardGate();
	void		attack(const std::string& target);
};

#endif
