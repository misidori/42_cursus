/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_double_moves.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:03:13 by misidori          #+#    #+#             */
/*   Updated: 2023/05/17 19:39:58 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

void	ft_swap_both_ss(t_program *program)
{
	if (!program->stack_a || !program->stack_b)
		ft_error_exit(program);
	ft_sa_swap_a(program->stack_a);
	ft_sb_swap_b(program->stack_b);
}

void	ft_rotate_both_rr(t_program *program)
{
	if (!program->stack_a || !program->stack_b)
		ft_error_exit(program);
	ft_ra_rotate_a(program->stack_a);
	ft_rb_rotate_b(program->stack_b);
}

void	ft_reverse_rotate_both_rrr(t_program *program)
{
	if (!program->stack_a || !program->stack_b)
		ft_error_exit(program);
	ft_rra_reverse_rotate_a(program->stack_a);
	ft_rrb_reverse_rotate_b(program->stack_b);
}
