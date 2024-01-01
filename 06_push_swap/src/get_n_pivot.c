/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pivots_big_numbers_one.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 22:07:57 by misidori          #+#    #+#             */
/*   Updated: 2024/01/01 19:14:45 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_get_n_pivot(t_program *program, int i)
{
	t_node	*current;
	int		pivot;
	int		j;

	j = -1;
	pivot = (program->stack_copy->size / program->stack_a->n_pivots) * (i + 1);
	current = program->stack_copy->node;
	if (program->stack_copy->size % program->stack_a->n_pivots == 0)
	{
		while (++j < pivot - 1)
			current = current->next;
		program->stack_a->pivot[i] = current->value;
	}
	else
	{
		while (++j < pivot - 1)
			current = current->next;
		program->stack_a->pivot[i] = current->value;
	}
}
