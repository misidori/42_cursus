/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_stack_in_brackets.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 20:51:26 by misidori          #+#    #+#             */
/*   Updated: 2024/01/01 19:58:23 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

char	**ft_read_stack_in_brackets(char *argv)
{
	char	**array_numbers;

	array_numbers = ft_split(argv, ' ');
	return (array_numbers);
}

int	ft_size_array(char **array_numbers)
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
	while (i < ft_size_array(array_numbers))
	{
		free(array_numbers[i]);
		i++;
	}
	free(array_numbers);
}
