/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mv_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 21:44:27 by misidori          #+#    #+#             */
/*   Updated: 2024/01/01 19:24:20 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_ra_rotate_a(t_stack *stack_a)
{
	t_node	*first_node;
	t_node	*last_node;

	if (stack_a->size < 2)
		return ;
	first_node = stack_a->node;
	last_node = stack_a->node;
	while (last_node->next)
		last_node = last_node->next;
	stack_a->node = first_node->next;
	stack_a->node->prev = NULL;
	last_node->next = first_node;
	first_node->next = NULL;
	first_node->prev = last_node;
}

void	ft_ra(t_stack *stack_a)
{
	ft_ra_rotate_a(stack_a);
	write(1, "ra\n", 3);
}

void	ft_rb_rotate_b(t_stack *stack_b)
{
	t_node	*first_node;
	t_node	*last_node;

	if (stack_b->size < 2)
		return ;
	first_node = stack_b->node;
	last_node = stack_b->node;
	while (last_node->next)
		last_node = last_node->next;
	stack_b->node = first_node->next;
	stack_b->node->prev = NULL;
	last_node->next = first_node;
	first_node->next = NULL;
	first_node->prev = last_node;
}

void	ft_rb(t_stack *stack_b)
{
	ft_rb_rotate_b(stack_b);
	write(1, "rb\n", 3);
}

void	ft_rr(t_stack *stack_a, t_stack *stack_b)
{
	ft_ra_rotate_a(stack_a);
	ft_rb_rotate_b(stack_b);
	write(1, "rr\n", 3);
}
