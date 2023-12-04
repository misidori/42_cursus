/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_up_and_push_biggest.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:03:29 by misidori          #+#    #+#             */
/*   Updated: 2023/05/09 15:43:24 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	ft_find_the_biggest_number(t_stack *stack)
{
	t_node	*node;
	int		i;

	node = stack->node;
	i = 1;
	while (node->value != stack->max)
	{
		node = node->next;
		i++;
	}
	return (i);
}

static void	ft_move_up_the_biggest(t_stack *stack)
{
	int		i;

	i = ft_find_the_biggest_number(stack);
	if (i <= (stack->size / 2))
	{
		while (stack->head->value != stack->max)
		{
			ft_rb(stack);
			stack->head = ft_get_stack_head(stack);
		}
	}
	else
	{
		while (stack->head->value != stack->max)
		{
			ft_rrb(stack);
			stack->head = ft_get_stack_head(stack);
		}
	}
}

void	ft_move_up_and_push_the_biggest_number_stack_b(t_program *program)
{
	t_node	*node;

	node = program->stack_b->node;
	ft_find_min_and_max_numbers(program->stack_b);
	program->stack_b->head = ft_get_stack_head(program->stack_b);
	if (node->value == program->stack_b->max)
		ft_pa(program->stack_a, program->stack_b);
	else
	{
		ft_move_up_the_biggest(program->stack_b);
		ft_pa(program->stack_a, program->stack_b);
		program->stack_b->head = ft_get_stack_head(program->stack_b);
	}
}
