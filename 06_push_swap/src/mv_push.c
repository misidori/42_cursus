/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mv_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:46:13 by misidori          #+#    #+#             */
/*   Updated: 2024/01/01 19:24:11 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static t_node	*pop_node(t_stack *stack)
{
	t_node	*node;

	if (stack->node == NULL)
		return (NULL);
	node = stack->node;
	stack->node = stack->node->next;
	stack->size--;
	return (node);
}

void	ft_push_a_pa(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*node;

	node = pop_node(stack_b);
	ft_stack_add_front(&stack_a, node);
}

void	ft_pa(t_stack *stack_a, t_stack *stack_b)
{
	ft_push_a_pa(stack_a, stack_b);
	write(1, "pa\n", 3);
}

void	ft_push_b_pb(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*node;

	node = pop_node(stack_a);
	ft_stack_add_front(&stack_b, node);
}

void	ft_pb(t_stack *stack_a, t_stack *stack_b)
{
	ft_push_b_pb(stack_a, stack_b);
	write(1, "pb\n", 3);
}
