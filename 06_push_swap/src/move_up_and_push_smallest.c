/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_up_and_push_smallest.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 21:47:43 by misidori          #+#    #+#             */
/*   Updated: 2023/05/09 15:37:17 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	ft_find_the_smallest_number(t_stack *stack)
{
	t_node	*node;
	int		i;

	node = stack->node;
	i = 1;
	while (node->value != stack->min)
	{
		node = node->next;
		i++;
	}
	return (i);
}

static void	ft_move_up_the_smallest(t_stack *stack)
{
	int		i;

	i = ft_find_the_smallest_number(stack);
	if (i <= (stack->size / 2))
	{
		while (stack->head->value != stack->min)
		{
			ft_ra(stack);
			stack->head = ft_get_stack_head(stack);
		}
	}
	else
	{
		while (stack->head->value != stack->min)
		{
			ft_rra(stack);
			stack->head = ft_get_stack_head(stack);
		}
	}
}

void	ft_move_up_and_push_the_smallest_number_stack_a(t_program *program)
{
	t_node	*node;

	node = program->stack_a->node;
	ft_find_min_and_max_numbers(program->stack_a);
	program->stack_a->head = ft_get_stack_head(program->stack_a);
	if (node->value == program->stack_a->min)
		ft_pb(program->stack_a, program->stack_b);
	else
	{
		ft_move_up_the_smallest(program->stack_a);
		ft_pb(program->stack_a, program->stack_b);
		program->stack_a->head = ft_get_stack_head(program->stack_a);
	}
}
