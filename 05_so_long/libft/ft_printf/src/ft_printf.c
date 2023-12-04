/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:28:08 by matteo            #+#    #+#             */
/*   Updated: 2023/03/11 03:08:00 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	conv_specifiers(const char *format, int i, va_list arg)
{
	if (format[i + 1] == 'c')
		return (ft_put_char(va_arg(arg, int)));
	if (format[i + 1] == 's')
		return (ft_put_str(va_arg(arg, char *)));
	if (format[i + 1] == 'p')
		return (ft_put_mem_add(va_arg(arg, unsigned long), "0123456789abcdef"));
	if (format[i + 1] == 'd' || format[i + 1] == 'i')
		return (ft_put_int(va_arg(arg, int)));
	if (format[i + 1] == 'u')
		return (ft_put_unsigned_int(va_arg(arg, unsigned int)));
	if (format[i + 1] == 'x')
		return (ft_put_int_hex(va_arg(arg, int), "0123456789abcdef"));
	if (format[i + 1] == 'X')
		return (ft_put_int_hex(va_arg(arg, int), "0123456789ABCDEF"));
	if (format[i + 1] == '%')
		return (ft_put_char('%'));
	else
		return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		i;
	int		len;

	if (!format || !*format)
		return (0);
	va_start(arg, format);
	i = 0;
	len = 0;
	while (format[i])
	{
		if (format[i] != '%')
		{
			len = len + ft_put_char(format[i]);
			i++;
		}
		else
		{
			len = len + conv_specifiers(format, i, arg);
			i = i + 2;
		}
	}
	va_end(arg);
	return (len);
}
