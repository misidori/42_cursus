/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 03:14:37 by matteo            #+#    #+#             */
/*   Updated: 2024/05/20 19:13:47 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap()
	:	name(""), hit_points(10), energy_points(10), damage(0), starting_hit_points(10), starting_energy_points(10)
{
	std::cout << BOLD GREY << "Default constructor called" << RESET << std::endl;
	std::cout << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	:	name(name), hit_points(10), energy_points(10), damage(0), starting_hit_points(10), starting_energy_points(10)
{
	std::cout << BOLD GREY << "Constructor called" << RESET << std::endl;
	std::cout << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap()
{
	std::cout << std::endl;
	std::cout << BOLD GREY << "Destructor called" << RESET << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		this->name = obj.name;
		this->hit_points = obj.hit_points;
		this->energy_points = obj.energy_points;
		this->damage = obj.damage;
		this->starting_hit_points = obj.get_starting_hit_points();
		this->starting_energy_points = obj.get_starting_energy_points();
	}

	return (*this);
}

std::string	ClapTrap::get_name() const
{
	return (this->name);
}

int	ClapTrap::get_hit_points() const
{
	return (this->hit_points);
}

int	ClapTrap::get_energy_points() const
{
	return (this->energy_points);
}

int	ClapTrap::get_damage() const
{
	return (this->damage);
}

int	ClapTrap::get_starting_hit_points() const
{
	return (this->starting_hit_points);
}

int	ClapTrap::get_starting_energy_points() const
{
	return (this->starting_energy_points);
}

void	ClapTrap::set_name(std::string name)
{
	this->name = name;
}

void	ClapTrap::set_hit_points(int hit_points)
{
	this->hit_points = hit_points;
}

void	ClapTrap::set_energy_points(int energy_points)
{
	this->energy_points = energy_points;
}

void	ClapTrap::set_starting_hit_points(int starting_hit_points)
{
	this->starting_hit_points = starting_hit_points;
}

void	ClapTrap::set_starting_energy_points(int starting_energy_points)
{
	this->starting_energy_points = starting_energy_points;
}

void	ClapTrap::set_damage(int damage)
{
	this->damage = damage;
}

void	ClapTrap::print_stats() const
{
	std::cout << YELLOW << "[STATS]" << RESET << std::endl;
	std::cout << this->name << ":" << std::endl;
	std::cout << "\tHit points:\t" << this->hit_points << std::endl;
	std::cout << "\tEnergy points:\t" << this->energy_points << std::endl;
}

void	ClapTrap::decrease_energy_points()
{
	this->energy_points--;
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << std::endl;
	std::cout << GREEN << name << " attacks " << target << ", causing " << damage << " points of damage!" << RESET << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	sleep(1);
	std::cout << std::endl;
	std::cout << RED << name << " was attacked and has lost " << amount << " hit points!" << RESET << std::endl;
	std::cout << std::endl;
	hit_points = hit_points - amount;
	if (hit_points <= 0)
	{
		sleep(1);
		std::cout << RED << name << " was killed!" << RESET << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points < this->starting_hit_points || this->energy_points < this->starting_energy_points)
		std::cout << std::endl << GREEN << "You used item: potion!" << RESET << std::endl;
	if (this->hit_points < this->starting_hit_points)
	{
		hit_points += amount;
		if (hit_points > this->starting_hit_points)
		{
			std::cout << GREEN << "Hit points are restored to full capacity" << RESET << std::endl;
			hit_points = this->starting_hit_points;
		}
	}
	else
	{
		std::cout << GREEN << "Hit points are already at full capacity" << RESET << std::endl;
	}
	if (this->energy_points < this->starting_energy_points)
	{
		energy_points += amount;
		if (energy_points > this->starting_energy_points)
		{
			std::cout << GREEN << "Energy points are restored to full capacity" << RESET << std::endl;
			energy_points = this->starting_energy_points;
		}
	}
	else
	{
		std::cout << GREEN << "Energy points are already at full capacity" << RESET << std::endl;
	}
}
