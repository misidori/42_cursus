/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_two.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:16:32 by misidori          #+#    #+#             */
/*   Updated: 2023/05/17 19:44:28 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_is_sorted(t_stack *a)
{
	t_node	*temp;
	int		sorted;

	temp = a->node;
	sorted = 1;
	while (temp != NULL && temp->next != NULL)
	{
		if (temp->value > temp->next->value)
		{
			sorted = 0;
			break ;
		}
		temp = temp->next;
	}
	return (sorted);
}

int	ft_is_reverse_sorted(t_stack *b)
{
	t_node	*temp;
	int		reverse_sorted;

	temp = b->node;
	reverse_sorted = 1;
	while (temp != NULL && temp->next != NULL)
	{
		if (temp->value < temp->next->value)
		{
			reverse_sorted = 0;
			break ;
		}
		temp = temp->next;
	}
	return (reverse_sorted);
}

void	ft_find_min_and_max_numbers(t_stack *stack)
{
	t_node	*temp;

	temp = stack->node;
	stack->min = INT_MAX;
	stack->max = INT_MIN;
	while (temp != NULL)
	{
		if (stack->min > temp->value)
			stack->min = temp->value;
		if (stack->max < temp->value)
			stack->max = temp->value;
		temp = temp->next;
	}
}

void	ft_print_list(t_stack *stack)
{
	t_node	*temp;
	int		i;

	temp = stack->node;
	i = 0;
	stack->size = ft_len_stack(stack);
	write(1, "\n-------------\n      A      \n-------------\n", 43);
	while (i < stack->size && temp != NULL)
	{
		ft_printf("      %d\n", temp->value);
		temp = temp->next;
		i++;
	}
}

void	ft_print_both_lists(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*temp_a;
	t_node	*temp_b;
	int		value_a;
	int		value_b;

	temp_a = stack_a->node;
	temp_b = stack_b->node;
	write(1, "      a      |      b\n----------------------------------\n", 57);
	while (temp_a || temp_b)
	{
		if (temp_a != NULL)
			value_a = temp_a->value;
		if (temp_b != NULL)
			value_b = temp_b->value;
		if (temp_a != NULL && temp_b != NULL)
			ft_printf("      %d             %d\n", value_a, value_b);
		else if (temp_b == NULL)
			ft_printf("      %d                     \n", value_a);
		else if (temp_a == NULL)
			ft_printf("                 %d\n", value_b);
		if (temp_a != NULL)
			temp_a = temp_a->next;
		if (temp_b != NULL)
			temp_b = temp_b->next;
	}
}
