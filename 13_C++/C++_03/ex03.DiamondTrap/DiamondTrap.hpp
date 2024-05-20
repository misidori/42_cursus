/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 01:36:56 by matteo            #+#    #+#             */
/*   Updated: 2024/03/06 11:28:03 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.h"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string	name;

public:
					DiamondTrap();
					DiamondTrap(std::string name);
					DiamondTrap(const DiamondTrap& other);
					~DiamondTrap();

	DiamondTrap&	operator=(const DiamondTrap& obj);

	void			whoAmI();
	void			attack(const std::string& target);
};

#endif
