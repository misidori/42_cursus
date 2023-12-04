/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 20:23:05 by misidori          #+#    #+#             */
/*   Updated: 2023/05/17 19:40:41 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

void	ft_check_sorted_checker(t_program *program, t_print *print)
{
	if (print->visualizer == 0)
	{
		program->stack_a->sorted = ft_is_sorted(program->stack_a);
		if (program->stack_a->sorted == 1)
			write(1, "OK\n", 3);
		else
			write(1, "KO\n", 3);
	}
	return ;
}

void	ft_check_str_two(t_program *program, char *moves)
{
	if (ft_strcmp_push_swap(moves, "rra\n") == 1)
		ft_rra_reverse_rotate_a(program->stack_a);
	else if (ft_strcmp_push_swap(moves, "rrb\n") == 1)
		ft_rrb_reverse_rotate_b(program->stack_b);
	else if (ft_strcmp_push_swap(moves, "ss\n") == 1)
		ft_swap_both_ss(program);
	else if (ft_strcmp_push_swap(moves, "rr\n") == 1)
		ft_rotate_both_rr(program);
	else if (ft_strcmp_push_swap(moves, "rrr\n") == 1)
		ft_reverse_rotate_both_rrr(program);
	else
		ft_error_exit(program);
}

int	ft_check_str_one(t_program *program, char *moves, int counter)
{
	while (moves)
	{
		++counter;
		if (ft_strcmp_push_swap(moves, "\n") == 1)
			return (0);
		if (ft_strcmp_push_swap(moves, "pa\n") == 1)
			ft_push_a_pa(program->stack_a, program->stack_b);
		else if (ft_strcmp_push_swap(moves, "pb\n") == 1)
			ft_push_b_pb(program->stack_a, program->stack_b);
		else if (ft_strcmp_push_swap(moves, "sa\n") == 1)
			ft_sa_swap_a(program->stack_a);
		else if (ft_strcmp_push_swap(moves, "sb\n") == 1)
			ft_sb_swap_b(program->stack_b);
		else if (ft_strcmp_push_swap(moves, "ra\n") == 1)
			ft_ra_rotate_a(program->stack_a);
		else if (ft_strcmp_push_swap(moves, "rb\n") == 1)
			ft_rb_rotate_b(program->stack_b);
		else
			ft_check_str_two(program, moves);
		free(moves);
		moves = get_next_line(0);
	}
	return (counter);
}

void	ft_do_the_moves(t_program *program, int argc, char **argv,
			t_print *print)
{
	int	counter;

	counter = 0;
	ft_initialize_variables(program->stack_a);
	counter = ft_check_str_one(program, get_next_line(0), counter);
	ft_check_sorted_checker(program, print);
	if (argc > 2 && (ft_strcmp(argv[1], "-v") == 0))
		ft_print_list_visualizer(program->stack_a, print, counter);
	else if (argc > 2 && (ft_strcmp(argv[1], "-m") == 0))
		ft_print_result(program->stack_a, counter);
}
