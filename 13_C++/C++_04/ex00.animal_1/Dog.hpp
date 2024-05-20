/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:35:08 by matteo            #+#    #+#             */
/*   Updated: 2024/03/12 13:41:59 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.h"

class Dog : public Animal
{
public:
			Dog();
			Dog(const Dog& other);
			~Dog();

	Dog&	operator=(const Dog& other);

	void	makeSound() const;
};


#endif
