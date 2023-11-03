/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 23:35:45 by misidori          #+#    #+#             */
/*   Updated: 2023/05/17 22:15:56 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

int	main(int argc, char **argv)
{
	t_program	program;
	t_print		print;

	program.stack_b = (t_stack *) malloc(sizeof(t_stack));
	if (!program.stack_b)
		return (0);
	ft_check_flags_checker(&program, argc, argv, &print);
	if (argc == 2)
	{
		print.visualizer = 0;
		argc = ft_fill_stack_in_brackets(&program, argc,
				ft_read_stack_in_brackets(argv[1]));
		ft_check_repeated_numbers_checker(&program);
		ft_do_the_moves(&program, argc, argv, &print);
	}
	else if (argc > 2 && (ft_strcmp(argv[1], "-v") != 0)
		&& (ft_strcmp(argv[1], "-m") != 0))
	{
		print.visualizer = 0;
		ft_fill_stack_checker(&program, argc, argv, 1);
		ft_check_repeated_numbers_checker(&program);
		ft_do_the_moves(&program, argc, argv, &print);
	}
	ft_free_stacks(&program);
	return (0);
}
