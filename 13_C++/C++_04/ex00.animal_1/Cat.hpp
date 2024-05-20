/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:35:36 by matteo            #+#    #+#             */
/*   Updated: 2024/03/12 14:18:43 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.h"

class Cat : public Animal
{
public:
			Cat();
			Cat(const Cat& other);
			~Cat();

	Cat&	operator=(const Cat& other);

	void	makeSound() const;
};

#endif
