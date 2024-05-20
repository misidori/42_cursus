/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:34:09 by matteo            #+#    #+#             */
/*   Updated: 2024/03/12 14:37:06 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include "Animal.h"

class WrongAnimal
{
protected:
	std::string type;

public:
					WrongAnimal();
					WrongAnimal(const WrongAnimal& other);
	virtual			~WrongAnimal();

	WrongAnimal&	operator=(const WrongAnimal& other);

	void			makeSound() const;
	std::string		getType() const;
};

#endif
