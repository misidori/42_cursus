/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:53:50 by matteo            #+#    #+#             */
/*   Updated: 2024/03/12 14:18:53 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "Animal.h"

class Animal
{
protected:
	std::string	type;

public:
					Animal();
					Animal(const Animal& other);
	virtual			~Animal();
	Animal&			operator=(const Animal& other);

	virtual void	makeSound() const;
	std::string		getType() const;
};

#endif
