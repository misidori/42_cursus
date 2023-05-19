/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_up_to_five_numbers.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:15:50 by misidori          #+#    #+#             */
/*   Updated: 2023/05/09 15:47:49 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_sort_two_numbers(t_stack *stack)
{
	ft_ra(stack);
}

void	ft_sort_three_numbers_ascending_order_stack_a(t_stack *stack)
{
	if (stack->node->value < stack->node->next->value
		&& stack->node->next->value > stack->node->next->next->value
		&& stack->node->value < stack->node->next->next->value)
	{
		ft_sa(stack);
		ft_ra(stack);
	}
	else if (stack->node->value > stack->node->next->value
		&& stack->node->value < stack->node->next->next->value)
		ft_sa(stack);
	else if (stack->node->value < stack->node->next->value
		&& stack->node->next->value > stack->node->next->next->value
		&& stack->node->value > stack->node->next->next->value)
		ft_rra(stack);
	else if (stack->node->value > stack->node->next->value
		&& stack->node->next->value < stack->node->next->next->value
		&& stack->node->value > stack->node->next->next->value)
		ft_ra(stack);
	else if (stack->node->value > stack->node->next->value
		&& stack->node->next->value > stack->node->next->next->value)
	{
		ft_sa(stack);
		ft_rra(stack);
	}
}

void	ft_sort_three_numbers_descending_order_stack_b(t_stack *stack)
{
	if (stack->node->value > stack->node->next->value
		&& stack->node->next->value < stack->node->next->next->value
		&& stack->node->value > stack->node->next->next->value)
	{
		ft_sb(stack);
		ft_rb(stack);
	}
	else if (stack->node->value < stack->node->next->value
		&& stack->node->value > stack->node->next->next->value)
		ft_sb(stack);
	else if (stack->node->value > stack->node->next->value
		&& stack->node->next->value < stack->node->next->next->value
		&& stack->node->value < stack->node->next->next->value)
		ft_rrb(stack);
	else if (stack->node->value < stack->node->next->value
		&& stack->node->next->value > stack->node->next->next->value
		&& stack->node->value < stack->node->next->next->value)
		ft_rb(stack);
	else if (stack->node->value < stack->node->next->value
		&& stack->node->next->value < stack->node->next->next->value)
	{
		ft_sb(stack);
		ft_rrb(stack);
	}
}

void	ft_sort_four_numbers(t_program *program)
{
	ft_move_up_and_push_the_smallest_number_stack_a(program);
	ft_sort_three_numbers_ascending_order_stack_a(program->stack_a);
	ft_pa(program->stack_a, program->stack_b);
}

void	ft_sort_five_numbers(t_program *program)
{
	ft_move_up_and_push_the_smallest_number_stack_a(program);
	ft_move_up_and_push_the_smallest_number_stack_a(program);
	ft_sort_three_numbers_ascending_order_stack_a(program->stack_a);
	ft_pa(program->stack_a, program->stack_b);
	ft_pa(program->stack_a, program->stack_b);
}
