/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_move_win.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 01:58:48 by misidori          #+#    #+#             */
/*   Updated: 2023/05/12 18:43:16 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	ft_stack_is_sorted_after_sa(t_stack *stack)
{
	t_node	*head;
	t_node	*current;

	if (stack->size < 3)
		return ;
	head = stack->node;
	current = stack->node->next->next;
	if (head->value > head->next->value
		&& head->value < head->next->next->value)
	{
		while (current != NULL)
		{
			if (current->value < current->prev->value)
				return ;
			current = current->next;
		}
		ft_sa(stack);
	}
	stack->sorted = ft_is_sorted(stack);
	if (stack->sorted == 1)
		exit (0);
}

static void	ft_stack_is_sorted_after_ra(t_stack *stack)
{
	t_node	*head;
	t_node	*current;
	t_node	*tail;

	head = stack->node;
	current = stack->node->next;
	tail = ft_get_stack_tail(stack);
	if (head->value > current->value && head->value > tail->value)
	{
		while (current->next)
		{
			if (current->value > current->next->value)
				return ;
			current = current->next;
		}
		ft_ra(stack);
	}
	stack->sorted = ft_is_sorted(stack);
	if (stack->sorted == 1)
		exit (0);
}

static void	ft_stack_is_sorted_after_rra(t_stack *stack)
{
	t_node	*head;
	t_node	*current;
	t_node	*second_to_last;
	t_node	*tail;

	head = stack->node;
	current = stack->node;
	tail = ft_get_stack_tail(stack);
	second_to_last = tail->prev;
	if (head->value > tail->value)
	{
		while (current != second_to_last)
		{
			if (current->value > current->next->value)
				return ;
			current = current->next;
		}
		ft_rra(stack);
	}
	stack->sorted = ft_is_sorted(stack);
	if (stack->sorted == 1)
		exit (0);
}

void	ft_check_one_move_win(t_stack *stack_a)
{
	if (stack_a->size < 3)
		return ;
	ft_stack_is_sorted_after_sa(stack_a);
	ft_stack_is_sorted_after_ra(stack_a);
	ft_stack_is_sorted_after_rra(stack_a);
}
