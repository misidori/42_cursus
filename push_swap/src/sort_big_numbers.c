/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:27:25 by misidori          #+#    #+#             */
/*   Updated: 2023/05/17 20:11:44 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	ft_count_numbers_less_than_pivot(t_stack *stack, int pivot)
{
	t_node	*current;
	int		total_counter;

	current = ft_get_stack_head(stack);
	total_counter = 0;
	while (current)
	{
		if (current->value <= pivot)
			total_counter++;
		current = current->next;
	}
	return (total_counter);
}

static void	ft_push_in_b_or_rotate_a(int total_counter, t_program *program,
			int pivot)
{
	t_node	*current;
	t_node	*tail;
	int		counter_pb;

	current = program->stack_a->node;
	tail = program->stack_a->node;
	while (tail->next != NULL)
		tail = tail->next;
	counter_pb = 0;
	while (counter_pb != total_counter)
	{
		current = program->stack_a->node;
		if (current->value <= pivot)
		{
			ft_pb(program->stack_a, program->stack_b);
			counter_pb++;
		}
		else if (current->value > pivot)
			ft_ra(program->stack_a);
	}
}

void	ft_move_chunk(t_program *program, int pivot)
{
	int	total_counter;

	total_counter = ft_count_numbers_less_than_pivot(program->stack_a, pivot);
	ft_push_in_b_or_rotate_a(total_counter, program, pivot);
}

static void	ft_assign_pivot_numbers(t_program *program)
{
	program->stack_copy = ft_copy_stack(program->stack_a);
	ft_sort_stack_through_swap(program->stack_copy);
	ft_get_first_pivot_number(program);
	ft_get_second_pivot_number(program);
	ft_get_third_pivot_number(program);
	ft_get_fourth_pivot_number(program);
	ft_get_fifth_pivot_number(program);
	ft_get_sixth_pivot_number(program);
	ft_get_seventh_pivot_number(program);
	ft_get_eighth_pivot_number(program);
	ft_get_ninth_pivot_number(program);
	ft_get_tenth_pivot_number(program);
	ft_get_eleventh_pivot_number(program);
	ft_free_stack(program->stack_copy);
}

void	ft_sort_big_numbers(t_program *program, int counter_pb)
{
	ft_assign_pivot_numbers(program);
	ft_move_chunk(program, program->stack_a->first_pivot);
	ft_move_chunk(program, program->stack_a->second_pivot);
	ft_move_chunk(program, program->stack_a->third_pivot);
	ft_move_chunk(program, program->stack_a->fourth_pivot);
	ft_move_chunk(program, program->stack_a->fifth_pivot);
	ft_move_chunk(program, program->stack_a->sixth_pivot);
	ft_move_chunk(program, program->stack_a->seventh_pivot);
	ft_move_chunk(program, program->stack_a->eighth_pivot);
	ft_move_chunk(program, program->stack_a->ninth_pivot);
	ft_move_chunk(program, program->stack_a->tenth_pivot);
	ft_move_chunk(program, program->stack_a->eleventh_pivot);
	ft_sort_stacks(program, counter_pb);
}
