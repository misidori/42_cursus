/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:05:39 by matteo            #+#    #+#             */
/*   Updated: 2024/02/23 17:19:22 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
# define ZOMBIE_HPP

#include "zombie.h"

class Zombie
{
private:
	std::string	name;

public:
			Zombie(const std::string name);
			~Zombie();

	void	announce(void);
};

#endif
