/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:05:05 by misidori          #+#    #+#             */
/*   Updated: 2024/01/01 19:58:23 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/include/libft.h"

typedef struct s_node
{
	int				value;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	int		size;
	int		sorted;
	int		reverse_sorted;
	int		min;
	int		middle_number;
	int		max;
	int		n_pivots;
	int		*pivot;

	t_node	*node;
	t_node	*head;
	t_node	*tail;
}	t_stack;

typedef struct s_program
{
	int		flag;
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_stack	*stack_copy;
}	t_program;

void			ft_get_n_pivot(t_program *program, int i);
void			ft_fill_stack(t_program *program, int argc, char **argv);
int				ft_fill_stack_in_brackets(t_program *program, int argc,
					char **argv);
void			ft_error_message(void);
long long int	ft_atoi_push_swap(const char *str);
int				ft_check_input_errors(char **argv);
void			ft_stack_add_back(t_stack **stack, long long int value,
					int flag);
void			ft_stack_add_front(t_stack **stack, t_node *new_node);
void			ft_initialize_variables(t_stack *stack);
void			ft_push_a_pa(t_stack *stack_a, t_stack *stack_b);
void			ft_pa(t_stack *stack_a, t_stack *stack_b);
void			ft_push_b_pb(t_stack *stack_a, t_stack *stack_b);
void			ft_pb(t_stack *stack_a, t_stack *stack_b);
void			ft_rra_reverse_rotate_a(t_stack *stack_a);
void			ft_rra(t_stack *stack_a);
void			ft_rrb_reverse_rotate_b(t_stack *stack_b);
void			ft_rrb(t_stack *stack_b);
void			ft_rrr(t_stack *stack_a, t_stack *stack_b);
void			ft_ra_rotate_a(t_stack *stack_a);
void			ft_ra(t_stack *stack_a);
void			ft_rb_rotate_b(t_stack *stack_b);
void			ft_rb(t_stack *stack_b);
void			ft_rr(t_stack *stack_a, t_stack *b);
void			ft_sa_swap_a(t_stack *stack_a);
void			ft_sa(t_stack *stack_a);
void			ft_sb_swap_b(t_stack *stack_b);
void			ft_sb(t_stack *stack_b);
void			ft_ss(t_stack *stack_a, t_stack *stack_b);
void			ft_sort(int argc, t_program *program);
void			ft_check_one_move_win(t_stack *stack_a);
void			ft_sort_two_numbers(t_stack *stack);
void			ft_sort_three_numbers_ascending_order_stack_a(t_stack *stack);
void			ft_sort_three_numbers_descending_order_stack_b(t_stack *stack);
void			ft_sort_four_numbers(t_program *program);
void			ft_sort_five_numbers(t_program *program);
void			ft_sort_stacks(t_program *program, int counter_pb);
void			ft_sort_few_numbers(t_program *program, int counter_pb);
void			ft_sort_big_numbers(t_program *program, int counter_pb);
t_stack			*ft_copy_stack(t_stack *src);
void			ft_sort_stack_through_swap(t_stack *stack);
void			ft_print_list(t_stack *stack);
void			ft_print_both_lists(t_stack *a, t_stack *b);
int				ft_len_stack(t_stack *stack);
int				ft_is_sorted(t_stack *a);
int				ft_is_reverse_sorted(t_stack *b);
void			ft_find_min_and_max_numbers(t_stack *stack);
t_node			*ft_get_stack_head(t_stack *stack);
t_node			*ft_get_stack_tail(t_stack *stack);
void			ft_move_up_and_push_the_smallest_number_stack_a(
					t_program *program);
void			ft_move_up_and_push_the_biggest_number_stack_b(
					t_program *program);
void			ft_move_chunk(t_program *program, int pivot);
void			ft_get_middle_number(t_stack *stack_a);
void			ft_free_stack(t_stack *stack);
void			ft_free_stacks(t_program *program);
char			**ft_read_stack_in_brackets(char *argv);
int				ft_size_array(char **array);
void			ft_free_memory_array_numbers(char **array);

#endif
