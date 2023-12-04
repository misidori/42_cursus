/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_stack_in_brackets.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 20:51:26 by misidori          #+#    #+#             */
/*   Updated: 2023/05/12 19:11:21 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

char	**ft_read_stack_in_brackets(char *argv)
{
	char	**array_numbers;

	array_numbers = ft_split(argv, ' ');
	return (array_numbers);
}

int	ft_array_height(char **array_numbers)
{
	int	i;

	i = 0;
	while (array_numbers[i])
		i++;
	return (i);
}

void	ft_free_memory_array_numbers(char **array_numbers)
{
	int	i;

	i = 0;
	while (i < ft_array_height(array_numbers))
	{
		free(array_numbers[i]);
		i++;
	}
	free(array_numbers);
}
