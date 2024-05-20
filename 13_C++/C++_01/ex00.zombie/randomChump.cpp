/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 00:15:46 by matteo            #+#    #+#             */
/*   Updated: 2024/02/23 16:58:32 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.h"

void	randomChump(std::string name)
{
	Zombie	zombie(name);

	zombie.announce();
}
