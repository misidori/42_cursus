/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 21:38:38 by misidori          #+#    #+#             */
/*   Updated: 2023/07/14 16:24:09 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_usleep(useconds_t time)
{
	long long	start;

	start = ft_get_time();
	while ((ft_get_time() - start) < time)
		usleep(time / 10);
	return (0);
}

long long	ft_get_time(void)
{
	static struct timeval	tv;
	long long				time;
	long long				seconds;
	long long				microseconds;

	gettimeofday(&tv, NULL);
	seconds = (long long) tv.tv_sec;
	microseconds = (long long) tv.tv_usec;
	time = seconds * 1000 + microseconds / 1000;
	return (time);
}

void	ft_free_memory(t_program *program)
{
	free(program->forks_mutex);
	free(program->philo);
}
