/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:32:36 by misidori          #+#    #+#             */
/*   Updated: 2023/10/16 13:56:24 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_swap_order(char *str)
{
	char	temp;
	int		i;
	int		len;
	int		len_decrease;

	i = 0;
	len = ft_strlen(str);
	len_decrease = ft_strlen(str) - 1;
	while (i < len / 2)
	{
		temp = str[i];
		str[i] = str[len_decrease];
		str[len_decrease] = temp;
		i++;
		len_decrease--;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_swap_order(argv[1]);
	write(1, argv[1], ft_strlen(argv[1]));
	write(1, "\n", 1);
	return (0);
}
