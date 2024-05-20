/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 18:37:32 by misidori          #+#    #+#             */
/*   Updated: 2024/03/14 19:17:48 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

class Fixed
{
private:
	int					value;
	static const int	fractional_bits = 8;

public:
			Fixed();
			Fixed(const Fixed &obj);
			~Fixed();

	Fixed&	operator=(const Fixed& obj);
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};
