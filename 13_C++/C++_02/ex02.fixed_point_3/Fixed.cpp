/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 23:52:36 by matteo            #+#    #+#             */
/*   Updated: 2024/02/29 02:27:03 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed()
	:	value(0)
{
}

Fixed::Fixed(const int num)
	:	value(num << fractional_bits)
{
}

Fixed::Fixed(const float num)
	:	value(roundf(num * (1 << fractional_bits)))
{
}

Fixed::Fixed(const Fixed& src)
	:	value(src.value)
{
}

Fixed::~Fixed()
{
}

float	Fixed::toFloat() const
{
	return ((float) value / (1 << fractional_bits));
}

int	Fixed::toInt() const
{
	return (value >> fractional_bits);
}

bool	Fixed::operator>(const Fixed& obj) const
{
	return (this->value > obj.value);
}

bool	Fixed::operator<(const Fixed& obj) const
{
	return (this->value < obj.value);
}

bool	Fixed::operator>=(const Fixed& obj) const
{
	return (this->value >= obj.value);
}

bool	Fixed::operator<=(const Fixed& obj) const
{
	return (this->value <= obj.value);
}

bool	Fixed::operator==(const Fixed& obj) const
{
	return (this->value == obj.value);
}

bool	Fixed::operator!=(const Fixed& obj) const
{
	return (this->value != obj.value);
}

Fixed	Fixed::operator+(const Fixed& obj) const
{
	return Fixed(this->toFloat() + obj.toFloat());
}

Fixed	Fixed::operator-(const Fixed& obj) const
{
	return Fixed(this->toFloat() - obj.toFloat());
}

Fixed	Fixed::operator*(const Fixed& obj) const
{
	return Fixed(this->toFloat() * obj.toFloat());
}

Fixed	Fixed::operator/(const Fixed& obj) const
{
	if (obj.toFloat() == 0)
	{
		std::cout << "Error: Division by zero!" << std::endl;
		return (Fixed(0));
	}
	else
	{
		return (Fixed(this->toFloat() / obj.toFloat()));
	}
}

Fixed&	Fixed::operator++()
{
	this->value++;

	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);

	operator++();

	return (temp);
}

Fixed&	Fixed::operator--()
{
	this->value--;

	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);

	operator--();

	return (temp);
}
Fixed& Fixed::min(Fixed &obj1, Fixed& obj2)
{
	if (obj1 < obj2)
		return (obj1);
	else
		return (obj2);
}

const Fixed& Fixed::min(const Fixed& obj1, const Fixed& obj2)
{
	if (obj1 < obj2)
		return (obj1);
	else
		return (obj2);
}

Fixed& Fixed::max(Fixed& obj1, Fixed& obj2)
{
	if (obj1 > obj2)
		return (obj1);
	else
		return (obj2);
}

const Fixed& Fixed::max(const Fixed& obj1, const Fixed& obj2)
{
	if (obj1 > obj2)
		return (obj1);
	else
		return (obj2);
}
