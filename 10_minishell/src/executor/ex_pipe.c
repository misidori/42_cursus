/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex_pipe.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 09:23:15 by afalconi          #+#    #+#             */
/*   Updated: 2023/11/16 19:58:25 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static void	ex_create_pipe(t_minitree *node, t_shell_info *sh_info)
{
	if (pipe(sh_info->fd) == -1)
		node->exit_status = -1;
	if (sh_info->stdout_flag != 1 && node->exit_status != -1)
	{
		sh_info->pid_flag = 0;
		sh_info->pipe_flag = 0;
		sh_info->pid = fork();
		if (sh_info->pid == 0)
		{
			sh_info->pipe_flag = 1;
			sh_info->pid_flag = 1;
			close(sh_info->fd[0]);
			dup2(sh_info->fd[1], 1);
		}
	}
}

static void	ex_real_pipe(t_minitree *node, t_shell_info *sh_info)
{
	(void)node;
	if (sh_info->pid == 0)
		exit(1);
	if (sh_info->pid != 0)
		sh_info->pid_flag = 1;
	if (sh_info->stdin_flag != 1)
	{
		close(sh_info->fd[1]);
		dup2(sh_info->fd[0], 0);
	}
}

static void	ex_multi_pipe(t_minitree *node, t_shell_info *sh_info)
{
	int	tmp;

	tmp = 0;
	dup2(sh_info->fd_stdout, 1);
	dup2(sh_info->fd_stdin, 0);
	close(sh_info->fd[1]);
	tmp = dup(sh_info->fd[0]);
	close(sh_info->fd[0]);
	ex_create_pipe(node, sh_info);
	if (sh_info->pid == 0 && sh_info->stdout_flag != 1
		&& node->exit_status != -1)
		dup2(tmp, 0);
	if (sh_info->pid != 0)
		close(tmp);
}

void	ex_pipe(t_minitree *node, t_shell_info *sh_info)
{
	if (node->flag_pipe == 1)
		ex_create_pipe(node, sh_info);
	else if (node->flag_pipe == 2)
		ex_real_pipe(node, sh_info);
	else if (node->flag_pipe == 3 || node->flag_pipe == 5)
	{
		dup2(sh_info->fd_stdout, 1);
		dup2(sh_info->fd_stdin, 0);
		close(sh_info->fd[0]);
		while (waitpid(-1, NULL, 0) != -1)
		{
		}
		if (node->flag_pipe == 5)
			ex_create_pipe(node, sh_info);
	}
	else if (node->flag_pipe == 4)
		ex_multi_pipe(node, sh_info);
}
