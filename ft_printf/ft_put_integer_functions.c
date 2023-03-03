/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_integer_functions.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:24:13 by misidori          #+#    #+#             */
/*   Updated: 2023/02/11 20:28:08 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_positive_int(int n)
{
	int		i;
	int		j;
	int		n_value;
	int		n_length;
	char	str[10];

	i = 0;
	n_value = n;
	n_length = 0;
	while (n_value != 0)
	{
		j = 0;
		j = n_value % 10;
		n_value = n_value / 10;
		n_length++;
		str[i] = j + '0';
		i++;
	}
	i = 0;
	while (i < n_length)
	{
		write(1, &str[n_length -1 - i], 1);
		i++;
	}
	return (n_length);
}

int	ft_put_int(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
		len = ft_put_str("-2147483648");
	else if (n >= -2147483647 && n < 0)
	{
		len = ft_put_char('-');
		n = n * -1;
		len = len + ft_print_positive_int(n);
	}
	else if (n == 0)
		len = ft_put_char('0');
	else if (n > 0 && n <= 2147483647)
		len = ft_print_positive_int(n);
	return (len);
}

static int	ft_print_positive_unsigned_int(unsigned int n)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	n_value;
	unsigned int	n_length;
	char			str[10];

	i = 0;
	n_value = n;
	n_length = 0;
	while (n_value != 0)
	{
		j = 0;
		j = n_value % 10;
		n_value = n_value / 10;
		n_length++;
		str[i] = j + '0';
		i++;
	}
	i = 0;
	while (i < n_length)
	{
		write(1, &str[n_length -1 - i], 1);
		i++;
	}
	return (n_length);
}

int	ft_put_unsigned_int(unsigned int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len = 0;
	else if (n > 0 && n <= 4294967295)
		len = ft_print_positive_unsigned_int(n);
	else if (n >= 0 && n < 10)
		len = ft_put_char(n + '0');
	return (len);
}
