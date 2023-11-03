/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_one.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 19:04:51 by misidori          #+#    #+#             */
/*   Updated: 2023/05/17 16:20:18 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_error_message(void)
{
	write(2, "Error\n", 6);
	exit (1);
}

long long int	ft_atoi_push_swap(const char *str)
{
	int				i;
	long long int	number;
	long long int	sign;

	i = 0;
	number = 0;
	sign = 1;
	if (str[0] == '0' && ft_strlen(str) > 1)
		ft_error_message();
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i++] - '0');
		if ((number > INT_MAX && sign == 1)
			|| (-number < INT_MIN && sign == -1))
			ft_error_message();
	}
	if (str[i] != '\0')
		ft_error_message();
	return (sign * number);
}

void	ft_stack_add_back(t_stack **stack, long long int value, int flag)
{
	t_node	*new_node;

	new_node = (t_node *) malloc(sizeof(t_node));
	if (!new_node)
		return ;
	new_node->value = value;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (flag == 0)
	{
		*stack = (t_stack *) malloc(sizeof(t_stack));
		if (!*stack)
		{
			free(new_node);
			return ;
		}
		(*stack)->node = new_node;
		(*stack)->tail = new_node;
		return ;
	}
	new_node->prev = (*stack)->tail;
	(*stack)->tail->next = new_node;
	(*stack)->tail = new_node;
}

void	ft_stack_add_front(t_stack **stack, t_node *new_node)
{
	if (!stack || !new_node)
		return ;
	new_node->next = (*stack)->node;
	new_node->prev = NULL;
	if ((*stack)->node)
		(*stack)->node->prev = new_node;
	(*stack)->node = new_node;
	(*stack)->size++;
}

int	ft_len_stack(t_stack *stack)
{
	t_node	*temp;
	int		size;

	size = 0;
	temp = stack->node;
	while (temp)
	{
		size++;
		temp = temp->next;
	}
	return (size);
}
