/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:59:51 by misidori          #+#    #+#             */
/*   Updated: 2023/05/13 23:39:33 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	ft_sort_stack_a(t_program *program, int counter_pb)
{
	program->stack_a->size = ft_len_stack(program->stack_a);
	if (program->stack_a->size > 3)
	{
		ft_move_up_and_push_the_smallest_number_stack_a(program);
		counter_pb++;
		ft_sort_stack_a(program, counter_pb);
	}
	else
		ft_sort_three_numbers_ascending_order_stack_a(program->stack_a);
}

static void	ft_sort_stack_b_and_push_in_stack_a(t_program *program)
{
	program->stack_b->size = ft_len_stack(program->stack_b);
	if (program->stack_b->size > 3)
	{
		ft_move_up_and_push_the_biggest_number_stack_b(program);
		ft_sort_stack_b_and_push_in_stack_a(program);
	}
	else
	{
		ft_sort_three_numbers_descending_order_stack_b(program->stack_b);
		while (program->stack_b->size != 0)
		{
			ft_pa(program->stack_a, program->stack_b);
		}
	}
}

void	ft_sort_stacks(t_program *program, int counter_pb)
{
	ft_sort_stack_a(program, counter_pb);
	ft_sort_stack_b_and_push_in_stack_a(program);
}
