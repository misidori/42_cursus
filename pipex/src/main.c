/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 13:46:38 by misidori          #+#    #+#             */
/*   Updated: 2023/06/13 12:11:42 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pipex.h"

int	main(int argc, char **argv, char **envp)
{
	int	fd_pipe[2];
	int	pid;

	if (argc != 5)
		ft_strerror_einval();
	if (pipe(fd_pipe) == -1)
		ft_strerror_errno();
	pid = fork();
	if (pid == -1)
		ft_strerror_errno();
	if (pid == 0)
		child_process(argv, envp, fd_pipe);
	waitpid(pid, NULL, 0);
	parent_process(argv, envp, fd_pipe);
	return (0);
}
