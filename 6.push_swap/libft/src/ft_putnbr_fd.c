/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 18:31:01 by misidori          #+#    #+#             */
/*   Updated: 2023/03/27 16:08:32 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static void	ft_print_positive_number(int n, int fd)
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
		write(fd, &str[n_length -1 - i], 1);
		i++;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n >= -2147483647 && n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
		ft_print_positive_number(n, fd);
	}
	else if (n > 0 && n <= 2147483647)
		ft_print_positive_number(n, fd);
	else
		write(fd, "0", 1);
}
