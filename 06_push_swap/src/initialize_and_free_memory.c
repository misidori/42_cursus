/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_and_free_memory.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 20:33:19 by misidori          #+#    #+#             */
/*   Updated: 2024/01/01 19:22:31 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_initialize_variables(t_stack *stack)
{
	stack->size = ft_len_stack(stack);
	stack->sorted = ft_is_sorted(stack);
	stack->reverse_sorted = ft_is_reverse_sorted(stack);
	ft_find_min_and_max_numbers(stack);
	ft_get_middle_number(stack);
}

void	ft_free_stack(t_stack *stack)
{
	t_node	*current;
	t_node	*next;

	current = stack->node;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	free(stack);
}

void	ft_free_stacks(t_program *program)
{
	if (program->stack_a)
		ft_free_stack(program->stack_a);
	if (program->stack_b)
		ft_free_stack(program->stack_b);
}
