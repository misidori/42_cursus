/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_and_free_memory.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 20:33:19 by misidori          #+#    #+#             */
/*   Updated: 2023/05/17 19:54:08 by misidori         ###   ########.fr       */
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
	stack->first_pivot = 0;
	stack->second_pivot = 0;
	stack->third_pivot = 0;
	stack->fourth_pivot = 0;
	stack->fifth_pivot = 0;
	stack->sixth_pivot = 0;
	stack->seventh_pivot = 0;
	stack->eighth_pivot = 0;
	stack->ninth_pivot = 0;
	stack->tenth_pivot = 0;
	stack->eleventh_pivot = 0;
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
