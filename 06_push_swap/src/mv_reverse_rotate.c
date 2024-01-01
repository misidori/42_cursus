/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mv_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 21:44:27 by misidori          #+#    #+#             */
/*   Updated: 2024/01/01 19:24:16 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_rra_reverse_rotate_a(t_stack *stack_a)
{
	t_node	*second_to_last_node;
	t_node	*last_node;

	if (stack_a->size < 2)
		return ;
	second_to_last_node = NULL;
	last_node = stack_a->node;
	while (last_node->next)
	{
		second_to_last_node = last_node;
		last_node = last_node->next;
	}
	last_node->prev = NULL;
	last_node->next = stack_a->node;
	second_to_last_node->next = NULL;
	stack_a->node = last_node;
}

void	ft_rra(t_stack *stack_a)
{
	ft_rra_reverse_rotate_a(stack_a);
	write(1, "rra\n", 4);
}

void	ft_rrb_reverse_rotate_b(t_stack *stack_b)
{
	t_node	*second_to_last_node;
	t_node	*last_node;

	if (stack_b->size < 2)
		return ;
	second_to_last_node = NULL;
	last_node = stack_b->node;
	while (last_node->next)
	{
		second_to_last_node = last_node;
		last_node = last_node->next;
	}
	last_node->prev = NULL;
	last_node->next = stack_b->node;
	second_to_last_node->next = NULL;
	stack_b->node = last_node;
}

void	ft_rrb(t_stack *stack_b)
{
	ft_rrb_reverse_rotate_b(stack_b);
	write(1, "rrb\n", 4);
}

void	ft_rrr(t_stack *stack_a, t_stack *stack_b)
{
	ft_rra_reverse_rotate_a(stack_a);
	ft_rrb_reverse_rotate_b(stack_b);
	write(1, "rrr\n", 4);
}
