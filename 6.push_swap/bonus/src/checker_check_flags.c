/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_check_flags.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:11:20 by misidori          #+#    #+#             */
/*   Updated: 2023/05/17 20:07:09 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

static void	ft_check_print_number_moves(t_program *program, int argc,
	char **argv, t_print *print)
{
	if (argc == 3 && (ft_strcmp(argv[1], "-m") == 0))
	{
		print->visualizer = 1;
		argc = ft_fill_stack_in_brackets(program, argc,
				ft_read_stack_in_brackets(argv[2]));
		ft_do_the_moves(program, argc + 1, argv, print);
	}
	else if (argc > 3 && (ft_strcmp(argv[1], "-m") == 0))
	{
		print->visualizer = 1;
		ft_fill_stack_checker(program, argc, argv, 2);
		ft_do_the_moves(program, argc, argv, print);
	}
}

static void	ft_check_visualizer(t_program *program, int argc, char **argv,
			t_print *print)
{
	if (argc == 3 && (ft_strcmp(argv[1], "-v") == 0))
	{
		print->visualizer = 1;
		argc = ft_fill_stack_in_brackets(program, argc,
				ft_read_stack_in_brackets(argv[2]));
		ft_do_the_moves(program, argc + 1, argv, print);
	}
	else if (argc > 3 && (ft_strcmp(argv[1], "-v") == 0))
	{
		print->visualizer = 1;
		ft_fill_stack_checker(program, argc, argv, 2);
		ft_do_the_moves(program, argc, argv, print);
	}
}

void	ft_check_flags_checker(t_program *program, int argc, char **argv,
			t_print *print)
{
	ft_check_visualizer(program, argc, argv, print);
	ft_check_print_number_moves(program, argc, argv, print);
}
