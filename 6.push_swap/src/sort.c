/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 17:20:15 by misidori          #+#    #+#             */
/*   Updated: 2023/05/17 20:52:37 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_fill_stack_in_brackets(t_program *program, int argc, char **argv)
{
	int				i;
	long long int	inserted_value;

	i = 0;
	program->flag = 0;
	ft_check_input_errors(argv);
	argc = ft_array_height(argv);
	while (i < argc)
	{
		inserted_value = ft_atoi_push_swap(argv[i]);
		ft_stack_add_back(&program->stack_a, inserted_value, program->flag);
		program->flag = 1;
		i++;
	}
	ft_free_memory_array_numbers(argv);
	return (argc);
}

void	ft_fill_stack(t_program *program, int argc, char **argv)
{
	int				i;
	long long int	inserted_value;

	i = 1;
	program->flag = 0;
	ft_check_input_errors(argv);
	while (i < argc)
	{
		inserted_value = ft_atoi_push_swap(argv[i]);
		ft_stack_add_back(&program->stack_a, inserted_value, program->flag);
		program->flag = 1;
		i++;
	}
}

static void	ft_check_sorted(t_program *program)
{
	program->stack_a->sorted = ft_is_sorted(program->stack_a);
	if (program->stack_a->sorted == 1)
	{
		ft_free_stacks(program);
		exit (0);
	}
}

void	ft_sort(int argc, t_program *program)
{
	static int	counter_pb;

	counter_pb = 0;
	ft_check_sorted(program);
	ft_check_one_move_win(program->stack_a);
	if (argc == 2)
		return ;
	else if (argc == 3)
		ft_sort_two_numbers(program->stack_a);
	else if (argc == 4)
		ft_sort_three_numbers_ascending_order_stack_a(program->stack_a);
	else if (argc == 5)
		ft_sort_four_numbers(program);
	else if (argc == 6)
		ft_sort_five_numbers(program);
	else if (argc >= 7 && argc <= 40)
		ft_sort_few_numbers(program, counter_pb);
	else if (argc > 40)
		ft_sort_big_numbers(program, counter_pb);
}
