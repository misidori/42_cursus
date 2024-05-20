/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:20:56 by matteo            #+#    #+#             */
/*   Updated: 2024/03/12 16:09:13 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Animal.h"

class Brain
{
private:
	std::string	ideas[100];

public:
	Brain();
	Brain(const Brain& other);
	~Brain();

	Brain&	operator=(const Brain& other);
};

#endif
