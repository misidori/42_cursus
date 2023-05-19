/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pivots_big_numbers_two.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 14:03:58 by misidori          #+#    #+#             */
/*   Updated: 2023/05/17 20:13:11 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_get_fifth_pivot_number(t_program *program)
{
	t_node	*current;
	int		len;
	int		fifth_pivot_position;
	int		i;

	i = -1;
	len = ft_len_stack(program->stack_copy);
	fifth_pivot_position = (len / 12) * 5;
	current = program->stack_copy->node;
	if (len % 12 == 0)
	{
		while (++i < fifth_pivot_position - 1)
			current = current->next;
		program->stack_a->fifth_pivot = current->value;
	}
	else
	{
		while (++i < fifth_pivot_position)
			current = current->next;
		program->stack_a->fifth_pivot = current->value;
	}
}

void	ft_get_sixth_pivot_number(t_program *program)
{
	t_node	*current;
	int		len;
	int		sixth_pivot_position;
	int		i;

	i = -1;
	len = ft_len_stack(program->stack_copy);
	sixth_pivot_position = (len / 12) * 6;
	current = program->stack_copy->node;
	if (len % 12 == 0)
	{
		while (++i < sixth_pivot_position - 1)
			current = current->next;
		program->stack_a->sixth_pivot = current->value;
	}
	else
	{
		while (++i < sixth_pivot_position)
			current = current->next;
		program->stack_a->sixth_pivot = current->value;
	}
}

void	ft_get_seventh_pivot_number(t_program *program)
{
	t_node	*current;
	int		len;
	int		seventh_pivot_position;
	int		i;

	i = -1;
	len = ft_len_stack(program->stack_copy);
	seventh_pivot_position = (len / 12) * 7;
	current = program->stack_copy->node;
	if (len % 12 == 0)
	{
		while (++i < seventh_pivot_position - 1)
			current = current->next;
		program->stack_a->seventh_pivot = current->value;
	}
	else
	{
		while (++i < seventh_pivot_position)
			current = current->next;
		program->stack_a->seventh_pivot = current->value;
	}
}

void	ft_get_eighth_pivot_number(t_program *program)
{
	t_node	*current;
	int		len;
	int		eighth_pivot_position;
	int		i;

	i = -1;
	len = ft_len_stack(program->stack_copy);
	eighth_pivot_position = (len / 12) * 8;
	current = program->stack_copy->node;
	if (len % 12 == 0)
	{
		while (++i < eighth_pivot_position - 1)
			current = current->next;
		program->stack_a->eighth_pivot = current->value;
	}
	else
	{
		while (++i < eighth_pivot_position)
			current = current->next;
		program->stack_a->eighth_pivot = current->value;
	}
}
