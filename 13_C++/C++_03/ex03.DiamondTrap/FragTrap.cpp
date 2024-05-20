/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 19:13:24 by matteo            #+#    #+#             */
/*   Updated: 2024/03/15 00:15:22 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

FragTrap::FragTrap()
	:	ClapTrap()
{
	set_hit_points(100);
	set_energy_points(100);
	set_damage(30);
	set_starting_hit_points(100);
	set_starting_energy_points(100);
}

FragTrap::FragTrap(std::string name)
	:	ClapTrap(name)
{
	set_hit_points(100);
	set_energy_points(100);
	set_damage(30);
	set_starting_hit_points(100);
	set_starting_energy_points(100);
	std::cout << BOLD GREY << "FragTrap Constructor called" << RESET << std::endl;
	std::cout << std::endl;
}

FragTrap::FragTrap(const FragTrap &src)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap()
{
	std::cout << std::endl;
	std::cout << BOLD GREY << "FragTrap Destructor called" << RESET << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& obj)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
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

void	FragTrap::highFivesGuys()
{
	std::cout << std::endl;
	std::cout << GREEN << get_name() << " says: \"Give me a flying high five\"" << RESET << std::endl;
	std::cout << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	std::cout << std::endl;
	std::cout << GREEN << get_name() << " attacks " << target << " with a RKO! " << get_damage() << " points!" << RESET << std::endl;
	std::cout << std::endl;
}
