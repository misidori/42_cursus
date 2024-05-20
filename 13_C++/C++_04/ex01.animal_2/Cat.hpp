/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:35:36 by matteo            #+#    #+#             */
/*   Updated: 2024/03/12 15:51:49 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.h"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain*	brain;

public:
			Cat();
			Cat(const Cat& other);
			~Cat();

	Cat&	operator=(const Cat& other);

	void	makeSound() const;
};

#endif
