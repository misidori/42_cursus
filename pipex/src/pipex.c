/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 02:26:26 by misidori          #+#    #+#             */
/*   Updated: 2023/06/13 12:12:31 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pipex.h"

static char	*find_path(char *cmd, char **envp)
{
	char	**paths;
	char	*partial_path;
	char	*full_path;
	int		i;

	i = 0;
	while (ft_strnstr(envp[i], "PATH", 4) == 0)
		i++;
	paths = ft_split(envp[i] + 5, ':');
	i = 0;
	while (paths[i])
	{
		partial_path = ft_strjoin(paths[i], "/");
		full_path = ft_strjoin(partial_path, cmd);
		free(partial_path);
		if (access(full_path, F_OK) == 0)
			return (full_path);
		i++;
	}
	return (NULL);
}

static void	execute_cmd(char *argv, char **envp)
{
	char	**cmd;
	int		res_execve;

	cmd = ft_split(argv, ' ');
	res_execve = execve(find_path(cmd[0], envp), cmd, envp);
	if (res_execve == -1)
		ft_strerror_errno();
}

void	child_process(char **argv, char **envp, int *fd_pipe)
{
	int	infile;

	close(fd_pipe[0]);
	infile = open(argv[1], O_RDONLY | O_CLOEXEC, 0777);
	if (infile == -1)
		ft_strerror_errno();
	dup2(fd_pipe[1], STDOUT_FILENO);
	close(fd_pipe[1]);
	dup2(infile, STDIN_FILENO);
	close(infile);
	execute_cmd(argv[2], envp);
}

void	parent_process(char **argv, char **envp, int *fd_pipe)
{
	int	outfile;

	close(fd_pipe[1]);
	outfile = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC | O_CLOEXEC, 0777);
	if (outfile == -1)
		ft_strerror_errno();
	dup2(fd_pipe[0], STDIN_FILENO);
	close(fd_pipe[0]);
	dup2(outfile, STDOUT_FILENO);
	close(outfile);
	execute_cmd(argv[3], envp);
}
