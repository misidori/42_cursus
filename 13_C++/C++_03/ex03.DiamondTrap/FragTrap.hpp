/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 19:13:21 by matteo            #+#    #+#             */
/*   Updated: 2024/03/15 00:15:27 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAPTRAP_H
# define FRAPTRAP_H

#include "ClapTrap.h"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& other);
	~FragTrap();

	FragTrap&	operator=(const FragTrap& obj);

	void	highFivesGuys(void);
	void	attack(const std::string& target);
};

#endif
