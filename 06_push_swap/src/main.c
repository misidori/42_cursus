/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:22:49 by misidori          #+#    #+#             */
/*   Updated: 2023/05/29 12:59:22 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_program		program;

	program.stack_b = (t_stack *) malloc(sizeof(t_stack));
	if (!program.stack_b)
		return (0);
	if (argc < 2)
		exit(0);
	else if (argc == 2)
		argc = ft_fill_stack_in_brackets(&program, argc,
				ft_read_stack_in_brackets(argv[1])) + 1;
	else
		ft_fill_stack(&program, argc, argv);
	ft_initialize_variables(program.stack_a);
	ft_sort(argc, &program);
	ft_free_stacks(&program);
	return (0);
}
