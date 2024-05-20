/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:30:07 by misidori          #+#    #+#             */
/*   Updated: 2024/03/14 19:37:46 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include "Fixed.h"

class Fixed
{
private:
	int					value;
	static const int	fractional_bits = 8;

public:
	Fixed();
	Fixed(const int int_val);
	Fixed(const float floatVal);
	Fixed(const Fixed &src);
	~Fixed();

	Fixed&	operator=(const Fixed &obj);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

#endif
