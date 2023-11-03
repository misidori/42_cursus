/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:34:14 by misidori          #+#    #+#             */
/*   Updated: 2023/10/16 15:22:36 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	number;
	int	sign;

	i = 0;
	number = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while ((str[i] >= 48 && str[i] <= 57))
	{
		number = number * 10 + (str[i] - 48);
		i++;
	}
	return (sign * number);
}

static void	ft_print_positive_number(int n)
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
}

void	ft_print_number(int n)
{
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else if (n >= -2147483647 && n < 0)
	{
		write(1, "-", 1);
		n = n * -1;
		ft_print_positive_number(n);
	}
	else if (n > 0 && n <= 2147483647)
		ft_print_positive_number(n);
	else
		write(1, "0", 1);
}

int	main(int argc, char **argv)
{
	int	arg_num;
	int	result;
	int	i;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	arg_num = ft_atoi(argv[1]);
	if (arg_num > 238609294)
	{
		write(1, "\n", 1);
		return (0);
	}	
	i = 1;
	while (i < 10)
	{
		ft_print_number(i);
		write(1, " x ", 3);
		ft_print_number(arg_num);
		write(1, " = ", 3);
		result = i * arg_num;
		ft_print_number(result);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
