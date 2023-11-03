/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 21:38:12 by misidori          #+#    #+#             */
/*   Updated: 2023/11/03 15:10:06 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static bool	ft_philo_takes_the_forks(t_program *program, int i)
{
	int	j;

	j = -1;
	while (++j < 2)
	{
		if (pthread_mutex_lock(&program->forks_mutex
				[program->philo[i].forks[j]]) != 0)
			return (false);
		if (ft_print_message(program, program->philo[i].id,
				"has taken a fork") == false)
			return (false);
		if (program->nb_philo == 1 || program->philo_dead == true)
		{
			if (ft_philo_is_dead(program, i) == true)
				break ;
		}
	}
	return (true);
}

bool	ft_philo_is_eating(t_program *program, int i)
{
	if (ft_philo_takes_the_forks(program, i) == false)
		return (false);
	if (program->philo_dead == false)
	{
		if (ft_print_message(program, program->philo[i].id,
				"is eating") == false)
			return (false);
		program->philo[i].is_eating = true;
		program->philo[i].time_to_die = ft_get_time();
		ft_usleep(program->time_eat);
		if (pthread_mutex_unlock(&program->forks_mutex
				[program->philo[i].forks[0]]) != 0)
			return (false);
		if (pthread_mutex_unlock(&program->forks_mutex
				[program->philo[i].forks[1]]) != 0)
			return (false);
		program->philo[i].is_eating = false;
		program->philo[i].count_ate++;
	}
	return (true);
}

bool	ft_philo_is_sleeping(t_program *program, int i)
{
	if (ft_print_message(program, program->philo[i].id, "is sleeping") == false)
		return (false);
	ft_usleep(program->time_sleep);
	return (true);
}

bool	ft_philo_is_thinking(t_program *program, int i)
{
	if (ft_print_message(program, program->philo[i].id, "is thinking") == false)
		return (false);
	return (true);
}

bool	ft_philo_is_dead(t_program *program, int i)
{
	long long	time;

	if (i == program->nb_philo)
		i = 0;
	time = ft_get_time() - program->philo[i].time_to_die;
	if (time > program->time_death && program->philo[i].is_eating == false)
	{
		ft_print_message(program, program->philo[i].id, "died");
		program->philo_dead = true;
		return (true);
	}
	i++;
	return (false);
}
