/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_messages.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 21:38:44 by misidori          #+#    #+#             */
/*   Updated: 2023/11/03 14:52:46 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

void	ft_print_error_message(char *error_message)
{
	ft_putstr_fd("\033[31m", 2);
	ft_putstr_fd(error_message, 2);
	ft_putstr_fd("\n\e[0m", 2);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (((unsigned char *) s1)[i] - ((unsigned char *) s2)[i]);
		i++;
	}
	return (0);
}

bool	ft_print_message(t_program *program, int id, char *status)
{
	long long	time;

	if (pthread_mutex_lock(&program->write_mutex) != 0)
		return (false);
	if (program->philo_dead == false)
	{
		time = ft_get_time() - program->start_time;
		if (ft_strncmp("died", status, 4) == 0)
		{
			if (program->nb_philo == 1)
				time = program->time_death;
			printf("\033[31m%lld\t%d\t%s\033[0m\n", time, id, status);
		}
		else if (ft_strncmp("is eating", status, 9) == 0)
			printf("\033[32m%lld\t%d\t%s\033[0m\n", time, id, status);
		else
			printf("%lld\t%d\t%s\n", time, id, status);
	}
	if (pthread_mutex_unlock(&program->write_mutex) != 0)
		return (false);
	return (true);
}
