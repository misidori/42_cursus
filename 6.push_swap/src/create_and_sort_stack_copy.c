/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_and_sort_stack_copy.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 22:07:57 by misidori          #+#    #+#             */
/*   Updated: 2023/05/09 21:27:09 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_stack	*ft_copy_stack(t_stack *stack)
{
	t_stack	*new_stack;
	t_node	*current_node;
	t_node	*new_node;
	t_node	*prev_node;

	current_node = stack->node;
	prev_node = NULL;
	new_stack = ft_calloc(ft_len_stack(stack), sizeof(t_stack));
	if (!new_stack)
		return (NULL);
	while (current_node)
	{
		new_node = ft_calloc(1, sizeof(t_node));
		if (!new_node)
			return (NULL);
		new_node->value = current_node->value;
		new_node->prev = prev_node;
		if (prev_node)
			prev_node->next = new_node;
		else
			new_stack->node = new_node;
		prev_node = new_node;
		current_node = current_node->next;
	}
	return (new_stack);
}

void	ft_sort_stack_through_swap(t_stack *stack)
{
	t_node	*current;
	t_node	*min_node;
	t_node	*runner;
	int		temp_value;

	current = stack->node;
	while (current->next != NULL)
	{
		min_node = current;
		runner = current->next;
		while (runner != NULL)
		{
			if (runner->value < min_node->value)
				min_node = runner;
			runner = runner->next;
		}
		if (min_node != current)
		{
			temp_value = current->value;
			current->value = min_node->value;
			min_node->value = temp_value;
		}
		current = current->next;
	}
	stack->sorted = 1;
}
