/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:53:18 by misidori          #+#    #+#             */
/*   Updated: 2023/05/17 22:09:43 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../../include/push_swap.h"
# include "../../libft/include/libft.h"

typedef struct s_print
{
	int	i;
	int	len;
	int	num;
	int	visualizer;
}	t_print;

int		ft_strcmp_push_swap(char *s1, char *s2);
void	ft_check_flags_checker(t_program *program, int argc, char **argv,
			t_print *print);
void	ft_check_repeated_numbers_checker(t_program *program);
void	ft_swap_both_ss(t_program *program);
void	ft_rotate_both_rr(t_program *program);
void	ft_reverse_rotate_both_rrr(t_program *program);
void	ft_check_sorted_checker(t_program *program, t_print *print);
void	ft_check_str_two(t_program *program, char *moves);
int		ft_check_str_one(t_program *program, char *moves, int counter);
void	ft_error_exit(t_program *program);
void	ft_do_the_moves(t_program *program, int argc, char **argv,
			t_print *print);
void	ft_fill_stack_checker(t_program *program, int argc,
			char **argv, int i);
void	ft_print_list_visualizer(t_stack *stack, t_print *print, int counter);
void	ft_print_result(t_stack *stack, int counter);

#endif
