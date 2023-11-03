/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_and_initialize_input.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 21:37:47 by misidori          #+#    #+#             */
/*   Updated: 2023/07/11 16:19:18 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static long long	ft_atoi_philo(const char *str)
{
	int			i;
	long long	number;

	i = 0;
	number = 0;
	if (str[0] == '0' && ft_strlen(str) > 1)
		return (0);
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i++] - '0');
		if (number < 0 || number > INT_MAX)
		{
			return (0);
			break ;
		}
	}
	if (str[i] != '\0')
		return (-1);
	return (number);
}

static bool	ft_check_input(t_program *program, int argc)
{
	if (program->nb_philo == 0)
	{
		ft_print_error_message("Error: Not enough philosophers");
		return (false);
	}
	else if (program->nb_philo < 0)
	{
		ft_print_error_message("Error: Wrong philosopher parameter inserted");
		return (false);
	}
	if (program->time_death <= 0 || program->time_eat <= 0
		|| program->time_sleep <= 0)
	{
		ft_print_error_message("Error: Wrong time parameter inserted");
		return (false);
	}
	if (argc == 6 && program->nb_times_must_eat <= 0)
	{
		ft_print_error_message("Error: Wrong number inserted");
		return (false);
	}
	return (true);
}

bool	ft_initialize_input(t_program *program, int argc, char **argv)
{
	program->nb_philo = ft_atoi_philo(argv[1]);
	program->time_death = ft_atoi_philo(argv[2]);
	program->time_eat = ft_atoi_philo(argv[3]);
	program->time_sleep = ft_atoi_philo(argv[4]);
	program->nb_times_must_eat = 0;
	if (argv[5])
		program->nb_times_must_eat = ft_atoi_philo(argv[5]);
	if (ft_check_input(program, argc) == false)
		return (false);
	return (true);
}
