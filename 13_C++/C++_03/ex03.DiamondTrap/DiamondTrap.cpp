/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 01:36:59 by matteo            #+#    #+#             */
/*   Updated: 2024/03/15 00:39:48 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"


DiamondTrap::DiamondTrap()
	:	ClapTrap(), FragTrap(), ScavTrap(), name("")
{
	FragTrap::set_hit_points(FragTrap::get_hit_points());
	ScavTrap::set_energy_points(ScavTrap::get_energy_points());
	FragTrap::set_damage(FragTrap::get_damage());
	FragTrap::set_starting_hit_points(FragTrap::get_starting_hit_points());
	ScavTrap::set_starting_energy_points(ScavTrap::get_starting_energy_points());
}

DiamondTrap::DiamondTrap(std::string name)
	:	ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), name(name)
{
	this->name = name;
	FragTrap::set_hit_points(FragTrap::get_hit_points());
	ScavTrap::set_energy_points(ScavTrap::get_energy_points());
	FragTrap::set_damage(FragTrap::get_damage());
	FragTrap::set_starting_hit_points(FragTrap::get_starting_hit_points());
	ScavTrap::set_starting_energy_points(ScavTrap::get_starting_energy_points());
	std::cout << BOLD GREY << "DiamondTrap Constructor called" << RESET << std::endl;
	std::cout << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = other;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << std::endl;
	std::cout << BOLD GREY << "DiamondTrap Destructor called" << RESET << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& obj)
{
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
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

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << std::endl;
	std::cout << GREEN << "My name is " << this->name << " but you can also call me " << ClapTrap::get_name() << RESET << std::endl;
}
