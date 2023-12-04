/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:04:16 by misidori          #+#    #+#             */
/*   Updated: 2023/10/16 14:27:21 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

char	ft_swap_letters(char c)
{
	if (c >= 'a' && c <= 'z')
		return ('a' + 'z' - c);
	else if (c >= 'A' && c <= 'Z')
		return ('A' + 'Z' - c);
	else
		return (c);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		argv[1][i] = ft_swap_letters(argv[1][i]);
		i++;
	}
	write(1, argv[1], ft_strlen(argv[1]));
	write(1, "\n", 1);
	return (0);
}
