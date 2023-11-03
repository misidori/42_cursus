/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threads.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 21:38:24 by misidori          #+#    #+#             */
/*   Updated: 2023/11/03 15:21:44 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

bool	ft_create_threads(t_program *program)
{
	int	i;

	i = 0;
	program->philo_dead = false;
	program->start_time = ft_get_time();
	while (i < program->nb_philo)
	{
		program->n_thread = i;
		if (pthread_create(&program->philo[i].philo_thread,
				NULL, &ft_routine, (void *) program) != 0)
			return (false);
		i++;
		ft_usleep(1);
	}
	if (pthread_create(&program->checker_thread, NULL, &ft_checker,
			(void *) program) != 0)
		return (false);
	if (ft_join_threads(program) == false)
		return (false);
	return (true);
}

bool	ft_join_threads(t_program *program)
{
	int	i;

	i = 0;
	while (i < program->nb_philo)
	{
		if (pthread_join(program->philo[i].philo_thread, NULL) != 0)
			return (false);
		i++;
	}
	if (pthread_join(program->checker_thread, NULL) != 0)
		return (false);
	return (true);
}
