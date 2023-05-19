/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pivots_big_numbers_one.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 22:07:57 by misidori          #+#    #+#             */
/*   Updated: 2023/05/17 20:12:19 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_get_first_pivot_number(t_program *program)
{
	t_node	*current;
	int		len;
	int		first_pivot_position;
	int		i;

	i = -1;
	len = ft_len_stack(program->stack_copy);
	first_pivot_position = len / 12;
	current = program->stack_copy->node;
	if (len % 12 == 0)
	{
		while (++i < first_pivot_position - 1)
			current = current->next;
		program->stack_a->first_pivot = current->value;
	}
	else
	{
		while (++i < first_pivot_position)
			current = current->next;
		program->stack_a->first_pivot = current->value;
	}
}

void	ft_get_second_pivot_number(t_program *program)
{
	t_node	*current;
	int		len;
	int		second_pivot_position;
	int		i;

	i = -1;
	len = ft_len_stack(program->stack_copy);
	second_pivot_position = (len / 12) * 2;
	current = program->stack_copy->node;
	if (len % 12 == 0)
	{
		while (++i < second_pivot_position - 1)
			current = current->next;
		program->stack_a->second_pivot = current->value;
	}
	else
	{
		while (++i < second_pivot_position)
			current = current->next;
		program->stack_a->second_pivot = current->value;
	}
}

void	ft_get_third_pivot_number(t_program *program)
{
	t_node	*current;
	int		len;
	int		third_pivot_position;
	int		i;

	i = -1;
	len = ft_len_stack(program->stack_copy);
	third_pivot_position = (len / 12) * 3;
	current = program->stack_copy->node;
	if (len % 12 == 0)
	{
		while (++i < third_pivot_position - 1)
			current = current->next;
		program->stack_a->third_pivot = current->value;
	}
	else
	{
		while (++i < third_pivot_position)
			current = current->next;
		program->stack_a->third_pivot = current->value;
	}
}

void	ft_get_fourth_pivot_number(t_program *program)
{
	t_node	*current;
	int		len;
	int		fourth_pivot_position;
	int		i;

	i = -1;
	len = ft_len_stack(program->stack_copy);
	fourth_pivot_position = (len / 12) * 4;
	current = program->stack_copy->node;
	if (len % 12 == 0)
	{
		while (++i < fourth_pivot_position - 1)
			current = current->next;
		program->stack_a->fourth_pivot = current->value;
	}
	else
	{
		while (++i < fourth_pivot_position)
			current = current->next;
		program->stack_a->fourth_pivot = current->value;
	}
}
