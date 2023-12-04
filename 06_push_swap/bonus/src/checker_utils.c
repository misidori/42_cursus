/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:40:18 by misidori          #+#    #+#             */
/*   Updated: 2023/05/17 22:10:43 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

void	ft_check_repeated_numbers_checker(t_program *program)
{
	t_node	*current;
	int		*occurrences;
	int		value;
	int		node_counter;

	node_counter = 0;
	current = program->stack_a->node;
	while (current)
	{
		node_counter++;
		current = current->next;
	}
	occurrences = (int *) calloc(node_counter, sizeof(int));
	if (occurrences == NULL)
		return ;
	current = program->stack_a->node;
	while (current)
	{
		value = current->value;
		if (occurrences[value] == 1)
			ft_error_exit(program);
		occurrences[value] = 1;
		current = current->next;
	}
	free(occurrences);
}

int	ft_strcmp_push_swap(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

void	ft_fill_stack_checker(t_program *program, int argc, char **argv, int i)
{
	long long int	inserted_value;

	program->flag = 0;
	ft_check_input_errors(argv + 2);
	while (i < argc)
	{
		inserted_value = ft_atoi_push_swap(argv[i]);
		ft_stack_add_back(&program->stack_a, inserted_value, program->flag);
		program->flag = 1;
		i++;
	}
}

void	ft_error_exit(t_program *program)
{
	ft_free_stacks(program);
	ft_error_message();
}
