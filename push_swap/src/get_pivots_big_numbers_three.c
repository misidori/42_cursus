/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pivots_big_numbers_three.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 14:03:54 by misidori          #+#    #+#             */
/*   Updated: 2023/05/17 20:12:42 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_get_ninth_pivot_number(t_program *program)
{
	t_node	*current;
	int		len;
	int		ninth_pivot_position;
	int		i;

	i = -1;
	len = ft_len_stack(program->stack_copy);
	ninth_pivot_position = (len / 12) * 9;
	current = program->stack_copy->node;
	if (len % 12 == 0)
	{
		while (++i < ninth_pivot_position - 1)
			current = current->next;
		program->stack_a->ninth_pivot = current->value;
	}
	else
	{
		while (++i < ninth_pivot_position)
			current = current->next;
		program->stack_a->ninth_pivot = current->value;
	}
}

void	ft_get_tenth_pivot_number(t_program *program)
{
	t_node	*current;
	int		len;
	int		tenth_pivot_position;
	int		i;

	i = -1;
	len = ft_len_stack(program->stack_copy);
	tenth_pivot_position = (len / 12) * 10;
	current = program->stack_copy->node;
	if (len % 12 == 0)
	{
		while (++i < tenth_pivot_position - 1)
			current = current->next;
		program->stack_a->tenth_pivot = current->value;
	}
	else
	{
		while (++i < tenth_pivot_position)
			current = current->next;
		program->stack_a->tenth_pivot = current->value;
	}
}

void	ft_get_eleventh_pivot_number(t_program *program)
{
	t_node	*current;
	int		len;
	int		eleventh_pivot_position;
	int		i;

	i = -1;
	len = ft_len_stack(program->stack_copy);
	eleventh_pivot_position = (len / 12) * 11;
	current = program->stack_copy->node;
	if (len % 12 == 0)
	{
		while (++i < eleventh_pivot_position - 1)
			current = current->next;
		program->stack_a->eleventh_pivot = current->value;
	}
	else
	{
		while (++i < eleventh_pivot_position)
			current = current->next;
		program->stack_a->eleventh_pivot = current->value;
	}
}
