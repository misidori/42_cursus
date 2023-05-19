/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_visualizer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 23:35:45 by misidori          #+#    #+#             */
/*   Updated: 2023/05/17 19:37:42 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

void	ft_print_white_spaces(int len)
{
	if (len == 1)
		write(1, "     ", 5);
	else if (len == 2)
		write(1, "     ", 5);
	else if (len == 3)
		write(1, "    ", 4);
	else if (len == 4)
		write(1, "    ", 4);
	else if (len == 5)
		write(1, "   ", 3);
	else if (len == 6)
		write(1, "   ", 3);
	else if (len == 7)
		write(1, "  ", 2);
	else if (len == 8)
		write(1, "  ", 2);
	else if (len == 9)
		write(1, "  ", 1);
}

int	ft_get_len_number(int number)
{
	int	len;

	len = 0;
	if (number == 0)
		len = 1;
	else
	{
		while (number != 0)
		{
			number /= 10;
			len++;
		}
	}
	return (len);
}

void	ft_print_result(t_stack *stack, int counter)
{
	int	result;
	int	len;

	result = ft_is_sorted(stack);
	len = 0;
	if (result == 1)
	{
		write(1, "-----------\n  SORTED!  \n-----------\n", 36);
		ft_printf("   MOVES   \n");
		len = ft_get_len_number(counter);
		ft_print_white_spaces(len);
		ft_printf("%d\n", counter);
		write(1, "-----------\n", 12);
	}
	else
		write(1, "-----------\nNOT SORTED!\n-----------\n\n", 37);
}

void	ft_print_list_visualizer(t_stack *stack, t_print *print, int counter)
{
	t_node	*temp;

	temp = stack->node;
	print->i = 0;
	write(1, "\n-----------\n     A     \n-----------\n", 37);
	while (print->i < stack->size && temp != NULL)
	{
		print->num = temp->value;
		print->len = ft_get_len_number(print->num);
		ft_print_white_spaces(print->len);
		ft_printf("%d\n", temp->value);
		temp = temp->next;
		print->i++;
	}
	ft_print_result(stack, counter);
}
