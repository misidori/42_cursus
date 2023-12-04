/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 22:26:33 by misidori          #+#    #+#             */
/*   Updated: 2023/11/03 15:21:24 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <pthread.h>
# include <sys/time.h>
# include <stdbool.h>

# define INT_MAX 2147483647

typedef struct s_philo
{
	int			id;
	int			forks[2];
	int			count_ate;
	long long	time_to_die;
	bool		is_eating;
	pthread_t	philo_thread;
}	t_philo;

typedef struct s_program
{
	int				nb_philo;
	long long		time_death;
	long long		time_eat;
	long long		time_sleep;
	int				nb_times_must_eat;

	int				n_thread;
	bool			philo_dead;
	long long		start_time;
	t_philo			*philo;
	pthread_t		checker_thread;
	pthread_mutex_t	*forks_mutex;
	pthread_mutex_t	write_mutex;
}	t_program;

void		ft_print_error_message(char *error_message);
bool		ft_print_message(t_program *program, int id, char *status);
bool		ft_initialize_input(t_program *program, int argc, char **argv);
bool		ft_create_philos(t_program *program);
void		ft_initialize_philo(t_program *program, int i, int j);
int			ft_usleep(useconds_t time);
bool		ft_create_mutex(t_program *program);
bool		ft_create_threads(t_program *program);
void		*ft_routine(void *args);
void		*ft_checker(void *args);
bool		ft_join_threads(t_program *program);
void		ft_free_memory(t_program *program);
long long	ft_get_time(void);
bool		ft_philo_is_eating(t_program *program, int i);
bool		ft_philo_is_sleeping(t_program *program, int i);
bool		ft_philo_is_thinking(t_program *program, int i);
bool		ft_philo_is_dead(t_program *program, int i);

#endif
