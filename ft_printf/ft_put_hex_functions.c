/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex_functions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:27:48 by misidori          #+#    #+#             */
/*   Updated: 2023/02/11 21:28:45 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_int_hex(unsigned int n, const char *format)
{
	int	len;

	len = 0;
	if (n >= 16)
		len = len + ft_put_int_hex(n / 16, format);
	len = len + ft_put_char(format[n % 16]);
	return (len);
}

int	ft_put_long_hex(unsigned long n, const char *format)
{
	int	len;

	len = 0;
	if (n >= 16)
		len = len + ft_put_long_hex(n / 16, format);
	len = len + ft_put_char(format[n % 16]);
	return (len);
}

int	ft_put_mem_add(unsigned long pointer, const char *alnum)
{
	int	len;

	if (!pointer)
		return (write(1, "0x0", 3));
	ft_put_char('0');
	ft_put_char('x');
	len = 2;
	len = len + ft_put_long_hex(pointer, alnum);
	return (len);
}
