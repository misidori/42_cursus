/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex_cmd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 07:43:55 by afalconi          #+#    #+#             */
/*   Updated: 2023/12/01 22:07:35 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static void	ex_check_quotes(char *str, int *i)
{
	char	sing_doub_q;

	sing_doub_q = 0;
	if (str[*i] == 39 || str[*i] == 34)
	{
		sing_doub_q = str[*i];
		*i = *i + 1;
		while (str[*i] != sing_doub_q)
			*i = *i + 1;
	}
}

static int	ex_cont_formated_arg(struct s_lx_list_token *arg)
{
	int		i;
	int		x;

	i = 0;
	x = 0;
	if (arg == NULL)
		return (2);
	while (arg->str[i] == ' ')
		i ++;
	while (arg->str[i])
	{
		x++;
		while (arg->str[i] && arg->str[i] != ' ')
		{
			ex_check_quotes(arg->str, &i);
			i++;
		}
		while (arg->str[i] == ' ')
			i ++;
	}
	x += 2;
	return (x);
}

static char	**ex_formated(struct s_lx_list_token *arg, char *cmd, int i)
{
	int		j;
	int		x;
	char	**ret;

	j = 0;
	x = 0;
	ret = ft_calloc(ex_cont_formated_arg(arg) * 8, 1);
	ret[0] = ft_strdup(cmd);
	ret[1] = NULL;
	if (arg == NULL)
		return (ret);
	while (arg->str[i] == ' ')
		i ++;
	while (arg->str[i])
	{
		j = i;
		i --;
		while (arg->str[++i] != ' ' && arg->str[i])
			ex_check_quotes(arg->str, &i);
		ret[++x] = ft_strndup(arg->str, j, i);
		while (arg->str[i] == ' ')
			i ++;
	}
	ret[++x] = NULL;
	return (ret);
}

int	ex_cmd(struct s_lx_list_token *cmd, struct s_lx_list_token *arg
	, struct s_minitree *node, t_shell_info *sh_info)
{
	char	*path_cmd;
	char	**arr_cmd_arg;
	int		exit;

	exit = 1;
	path_cmd = NULL;
	path_cmd = ex_ck_cmd(cmd, node, sh_info);
	if (path_cmd == NULL && bl_is_builtins(cmd->str) == 0)
	{
		node->exit_status = 127;
		return (-1);
	}
	arr_cmd_arg = ex_formated(arg, cmd->str, 0);
	arr_cmd_arg = wc_wildcard(arr_cmd_arg);
	if (bl_ck_builtins(&exit, arr_cmd_arg, sh_info->env, sh_info) == 0)
		ex_real_esecution(path_cmd, arr_cmd_arg, node, sh_info);
	if (exit == -1)
		node->exit_status = 1;
	ft_free_array(arr_cmd_arg);
	free(path_cmd);
	return (exit);
}
