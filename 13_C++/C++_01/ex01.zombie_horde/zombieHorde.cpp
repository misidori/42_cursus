/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 00:15:01 by matteo            #+#    #+#             */
/*   Updated: 2024/02/24 14:56:46 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.h"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie*	new_zombie = new Zombie[N];
	int		i = 0;

	while (i < N)
	{
		new (new_zombie + i) Zombie(name);
		i++;
	}
	return (new_zombie);
}

