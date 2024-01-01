/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mv_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 12:11:55 by misidori          #+#    #+#             */
/*   Updated: 2024/01/01 19:24:25 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_sa_swap_a(t_stack *stack_a)
{
	t_node	*first_node;
	t_node	*second_node;

	if (!stack_a || !stack_a->node || !stack_a->node->next)
		return ;
	first_node = stack_a->node;
	second_node = stack_a->node->next;
	first_node->next = second_node->next;
	if (second_node->next)
		second_node->next->prev = first_node;
	second_node->next = first_node;
	first_node->prev = second_node;
	second_node->prev = NULL;
	stack_a->node = second_node;
}

void	ft_sa(t_stack *stack_a)
{
	ft_sa_swap_a(stack_a);
	write(1, "sa\n", 3);
}

void	ft_sb_swap_b(t_stack *stack_b)
{
	t_node	*first_node;
	t_node	*second_node;

	if (!stack_b || !stack_b->node || !stack_b->node->next)
		return ;
	first_node = stack_b->node;
	second_node = stack_b->node->next;
	first_node->next = second_node->next;
	if (second_node->next)
		second_node->next->prev = first_node;
	second_node->next = first_node;
	first_node->prev = second_node;
	second_node->prev = NULL;
	stack_b->node = second_node;
}

void	ft_sb(t_stack *stack_b)
{
	ft_sb_swap_b(stack_b);
	write(1, "sb\n", 3);
}

void	ft_ss(t_stack *stack_a, t_stack *stack_b)
{
	ft_sa_swap_a(stack_a);
	ft_sb_swap_b(stack_b);
	write(1, "ss\n", 3);
}
