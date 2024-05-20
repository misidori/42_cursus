/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lx_ck_list_token.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 19:29:04 by afalconi          #+#    #+#             */
/*   Updated: 2024/05/20 19:44:39 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static int	lx_therd_token_ck(char token, char *old_token)
{
	if (token == INP || token == HDOC || token == OUT || token == APP)
	{
		*old_token = token;
		return (0);
	}
	if (token == AND || token == PIPE || token == OR)
	{
		if (*old_token == PIPE || *old_token == OR || *old_token == AND)
		{
			*old_token = token;
			return (-1);
		}
		*old_token = token;
		return (0);
	}
	return (1);
}

static int	lx_second_token_ck(char token, char *old_token)
{
	if (token == OP_S)
	{
		if (*old_token == AND || *old_token == OR || *old_token == PIPE
			|| *old_token == INP || *old_token == OUT || *old_token == HDOC
			|| *old_token == APP)
		{
			*old_token = token;
			return (0);
		}
		*old_token = token;
		return (-1);
	}
	if (token == CL_S)
	{
		if (*old_token == AND || *old_token == OR || *old_token == PIPE
			|| *old_token == OP_S)
		{
			*old_token = token;
			return (-1);
		}
		*old_token = token;
		return (0);
	}
	return (lx_therd_token_ck(token, old_token));
}

static int	lx_all_token_ck(char token, int flag)
{
	static char	old_token;

	if (flag == 1)
	{
		old_token = 0;
		return (0);
	}
	if (!old_token)
	{
		old_token = token;
		if (token != CMD && token != OP_S && token && token != INP
			&& token != OUT && token != HDOC && token != APP)
			return (-1);
		return (0);
	}
	if (token == CMD || token == ARG)
	{
		if (old_token == CL_S)
		{
			old_token = token;
			return (-1);
		}
		old_token = token;
		return (0);
	}
	return (lx_second_token_ck(token, &old_token));
}

static int	lx_ck_last_token(char token)
{
	if (token == AND || token == OR || token == PIPE)
		return (-1);
	return (0);
}

void	lx_ck_list_token(t_shell_info *sh_info)
{
	int8_t			exit;
	t_lx_list_token	*tmp;

	exit = 0;
	while (sh_info->lx_ls_token)
	{
		if (lx_all_token_ck(sh_info->lx_ls_token->token, 0) == -1 && exit != -1)
		{
			exit = -1;
		}
		tmp = sh_info->lx_ls_token;
		sh_info->lx_ls_token = sh_info->lx_ls_token->next;
	}
	if (lx_ck_last_token(tmp->token) == -1 && exit != -1)
	{
		exit = -1;
	}
	if (exit == -1)
		sh_info->lx_error = 1;
	sh_info->lx_ls_token = sh_info->lx_ls_token_h;
	lx_all_token_ck(sh_info->lx_ls_token->token, 1);
}
