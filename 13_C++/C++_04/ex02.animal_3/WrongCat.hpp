/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:33:03 by matteo            #+#    #+#             */
/*   Updated: 2024/03/12 14:01:41 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "Animal.h"

class WrongCat	:	public WrongAnimal
{
public:
				WrongCat();
				WrongCat(const WrongCat& other);
				~WrongCat();

	WrongCat&	operator=(const WrongCat& other);

	void		makeSound() const;
};

#endif
