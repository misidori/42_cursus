/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_up_to_twelve_numbers.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:11:03 by misidori          #+#    #+#             */
/*   Updated: 2023/05/13 18:35:39 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_get_middle_number(t_stack *stack_a)
{
	t_stack	*stack_copy;
	t_node	*current;
	int		len;
	int		middle_number;
	int		i;

	i = -1;
	stack_copy = ft_copy_stack(stack_a);
	ft_sort_stack_through_swap(stack_copy);
	len = ft_len_stack(stack_copy);
	middle_number = len / 2;
	current = stack_copy->node;
	if (len % 2 == 0)
	{
		while (++i < middle_number - 1)
			current = current->next;
		stack_a->middle_number = current->value;
	}
	else
	{
		while (++i < middle_number)
			current = current->next;
		stack_a->middle_number = current->value;
	}
	ft_free_stack(stack_copy);
}

void	ft_sort_few_numbers(t_program *program, int counter_pb)
{
	ft_get_middle_number(program->stack_a);
	ft_move_chunk(program, program->stack_a->middle_number);
	ft_sort_stacks(program, counter_pb);
}
