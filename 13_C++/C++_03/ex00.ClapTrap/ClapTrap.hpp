/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:57:00 by matteo            #+#    #+#             */
/*   Updated: 2024/03/15 00:00:57 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include "ClapTrap.h"

class ClapTrap
{
private:
	std::string	name;
	int			hit_points;
	int			energy_points;
	int			damage;
	int			starting_hit_points;
	int			starting_energy_points;

public:
				ClapTrap();
				ClapTrap(std::string name);
				ClapTrap(const ClapTrap& src);
				~ClapTrap();

	ClapTrap&	operator=(const ClapTrap& obj);

	std::string			get_name() const;
	int					get_hit_points() const;
	int					get_energy_points() const;
	int					get_damage() const;
	int					get_starting_hit_points() const;
	int					get_starting_energy_points() const;

	void				set_name(std::string name);
	void				set_hit_points(int hit_points);
	void				set_energy_points(int energy_points);
	void				set_damage(int damage);
	void				set_starting_hit_points(int starting_hit_points);
	void				set_starting_energy_points(int starting_energy_points);

	void				print_stats() const;
	void				decrease_energy_points();
	virtual void		attack(const std::string& target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);
};

#endif
