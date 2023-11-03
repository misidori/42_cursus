/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 21:38:31 by misidori          #+#    #+#             */
/*   Updated: 2023/11/03 16:00:18 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	philo(int argc, char **argv)
{
	t_program	program;

	if (argc < 5 || argc > 6)
	{
		ft_print_error_message("Error: Invalid argument");
		return (1);
	}
	if (ft_initialize_input(&program, argc, argv) == false)
		return (2);
	if (ft_create_philos(&program) == false)
		return (3);
	if (ft_create_mutex(&program) == false)
		return (4);
	if (ft_create_threads(&program) == false)
		return (5);
	ft_free_memory(&program);
	return (0);
}

int	main(int argc, char **argv)
{
	int	check_error;

	check_error = philo(argc, argv);
	if (check_error > 0)
	{
		return (1);
	}
	return (0);
}
