/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 21:38:49 by misidori          #+#    #+#             */
/*   Updated: 2023/07/19 01:26:23 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static bool	ft_execute_routine(t_program *program, int i)
{
	if (ft_philo_is_thinking(program, i) == false)
		return (false);
	if (ft_philo_is_eating(program, i) == false)
		return (false);
	if (program->nb_times_must_eat != program->philo[i].count_ate)
	{
		if (ft_philo_is_sleeping(program, i) == false)
			return (false);
	}
	return (true);
}

void	*ft_routine(void *args)
{
	t_program	*program;
	int			i;

	program = (t_program *) args;
	i = program->n_thread;
	if (program->nb_times_must_eat > 0)
	{
		while (program->nb_times_must_eat > program->philo[i].count_ate
			&& program->philo_dead == false)
			ft_execute_routine(program, i);
	}
	else
	{
		while (program->philo_dead == false)
		{
			if (ft_execute_routine(program, i) == false)
				break ;
		}
	}
	return (NULL);
}

void	*ft_checker(void *args)
{
	t_program	*program;
	int			i;

	program = (t_program *) args;
	i = 0;
	if (program->nb_times_must_eat > 0)
	{
		while (program->nb_times_must_eat > program->philo[i].count_ate
			&& program->philo_dead == false)
		{
			if (ft_philo_is_dead(program, i) == true)
				break ;
		}
	}
	else
	{
		while (program->philo_dead == false)
		{
			if (ft_philo_is_dead(program, i) == true)
				break ;
		}
	}
	return (NULL);
}
