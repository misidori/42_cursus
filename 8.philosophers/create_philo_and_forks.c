/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_philo_and_forks.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 21:38:05 by misidori          #+#    #+#             */
/*   Updated: 2023/07/16 23:16:38 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

bool	ft_create_philos(t_program *program)
{
	int	i;
	int	j;

	program->philo = malloc(sizeof(t_philo) * (program->nb_philo));
	if (!program->philo)
		return (false);
	i = 0;
	j = 1;
	while (j < program->nb_philo)
	{
		ft_initialize_philo(program, i, j);
		i++;
		j++;
	}
	j = 0;
	ft_initialize_philo(program, i, j);
	return (true);
}

void	ft_initialize_philo(t_program *program, int i, int j)
{
	program->philo[i].id = i + 1;
	program->philo[i].count_ate = 0;
	program->philo[i].time_to_die = 0;
	program->philo[i].forks[0] = i;
	program->philo[i].forks[1] = j;
	program->philo[i].is_eating = false;
}

bool	ft_create_mutex(t_program *program)
{
	int	i;

	program->forks_mutex = malloc(sizeof(pthread_mutex_t) * program->nb_philo);
	if (!program->forks_mutex)
		return (false);
	i = 0;
	while (i < program->nb_philo)
	{
		if (pthread_mutex_init(&program->forks_mutex[i], NULL) != 0)
			return (false);
		i++;
	}
	if (pthread_mutex_init(&program->write_mutex, NULL) != 0)
		return (false);
	return (true);
}
