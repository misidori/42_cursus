/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 11:51:10 by matteo            #+#    #+#             */
/*   Updated: 2024/05/20 19:16:06 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ScavTrap::ScavTrap()
	:	ClapTrap()
{
	set_hit_points(100);
	set_energy_points(50);
	set_damage(20);
	set_starting_hit_points(100);
	set_starting_energy_points(50);
}

ScavTrap::ScavTrap(std::string name)
	:	ClapTrap(name)
{
	set_hit_points(100);
	set_energy_points(50);
	set_damage(20);
	set_starting_hit_points(100);
	set_starting_energy_points(50);
	std::cout << BOLD GREY << "ScavTrap Constructor called" << RESET << std::endl;
	std::cout << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap()
{
	std::cout << std::endl;
	std::cout << BOLD GREY << "ScavTrap Destructor called" << RESET << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& obj)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		this->set_name(obj.get_name());
		this->set_hit_points(obj.get_hit_points());
		this->set_energy_points(obj.get_energy_points());
		this->set_damage(obj.get_damage());
		this->set_starting_hit_points(obj.get_starting_hit_points());
		this->set_starting_energy_points(obj.get_starting_energy_points());
	}

	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << std::endl;
	std::cout << GREEN << "ScavTrap " << get_name() << " is now in gatekeeper mode and can't be attacked." << RESET << std::endl;
	std::cout << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	std::cout << std::endl;
	std::cout << GREEN << "ScavTrap " << get_name() << " attacks " << target << " with a 619! " << get_damage() << " points!"  << RESET << std::endl;
	std::cout << std::endl;
}
