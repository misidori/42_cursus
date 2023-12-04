/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input_errors.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 18:49:02 by misidori          #+#    #+#             */
/*   Updated: 2023/05/17 21:05:43 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_check_repeated_numbers(char **argv)
{
	int	repeated_number;
	int	i;
	int	j;

	repeated_number = 0;
	i = 1;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			repeated_number = ft_strcmp(argv[i], argv[j]);
			if (repeated_number == 0)
				ft_error_message();
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_check_size_number(char **argv)
{
	int				i;
	long long int	inserted_number;

	i = 1;
	while (argv[i])
	{
		inserted_number = ft_atoi_push_swap(argv[i]);
		if (inserted_number < INT_MIN)
			ft_error_message();
		else if (inserted_number > INT_MAX)
			ft_error_message();
		i++;
	}
	return (0);
}

int	ft_check_input_errors(char **argv)
{
	ft_check_repeated_numbers(argv);
	ft_check_size_number(argv);
	return (0);
}
