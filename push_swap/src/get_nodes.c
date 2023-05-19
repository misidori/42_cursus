/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_nodes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 01:35:27 by misidori          #+#    #+#             */
/*   Updated: 2023/05/10 23:18:29 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_node	*ft_get_stack_head(t_stack *stack)
{
	if (stack == NULL)
		write(2, "Error\n", 6);
	return (stack->node);
}

t_node	*ft_get_stack_tail(t_stack *stack)
{
	t_node	*current_node;

	if (stack == NULL)
	{
		write(2, "Error\n", 6);
		return (NULL);
	}
	current_node = stack->node;
	while (current_node->next != NULL)
		current_node = current_node->next;
	return (current_node);
}
