/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 13:09:57 by afalconi          #+#    #+#             */
/*   Updated: 2023/12/01 21:59:08 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURES_H
# define STRUCTURES_H

typedef struct s_program
{
	struct dirent	*dir_entry;
	DIR				*dir;
}	t_program;

typedef struct s_index_match
{
	int	name_in_folder;
	int	input_str;
	int	star;
	int	match;
}	t_index_match;

typedef struct s_expansion
{
	char	*name_w_dollar;
	char	*name_var;
	char	*value_var;
	char	*temp_str;
	int		index_dollar_sign;
	int		len_new_value;
	int		n_dollar_sign;
	int		i;
	int		k;
	int		j;
}	t_expansion;

typedef struct s_wildcard
{
	char		**list_of_files;
	char		**new_array;
	char		**temp;
	int			size_array;
	int			count;
	int			i;
	int			j;
}	t_wildcard;

typedef struct s_export_var
{
	char	*name;
	int		index_egual_sign;
	int		return_value;
	int		i;
}	t_export_var;

typedef struct s_node
{
	char			*full_info;
	char			*name;
	char			*value;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_list_var_env
{
	t_node	*node;
	t_node	*head;
	t_node	*tail;
}	t_list_var_env;

typedef struct s_lx_list_token
{
	char					*str;
	char					token;
	struct s_lx_list_token	*next;
}	t_lx_list_token;

typedef struct s_list_redirection
{
	char						*file;
	int							fd_input;
	char						token;
	int8_t						dont_say_that;
	int							fd_copy;
	int							fd_of_file;
	struct s_list_redirection	*next;
}	t_list_redirection;

typedef struct s_minitree
{
	int							flag_pipe;
	struct s_lx_list_token		*token;
	int							exit_status;
	int8_t						dont_say_that;
	int							*fd_file;
	struct s_list_redirection	*redire;
	struct s_list_redirection	*close_redire;
	char						**env;
	struct s_minitree			*next;
	struct s_minitree			*subsh;
}	t_minitree;

typedef struct s_setup_redire
{
	t_list_redirection	*redire_list;
	t_list_redirection	*redire_list_h;
	t_minitree			*last;
	t_minitree			*first;
}	t_setup_redire;

typedef struct s_shell_info
{
	int					last_exit;
	int					flag_hdoc_sig;
	int					complete_quote;
	int					exit_stat;
	int					fd[2];
	pid_t				pid;
	int					sub_level;
	int					pipe_flag;
	int					pid_flag;
	char				**env;
	char				*complite;
	char				*input;
	char				*pwd;
	int					stdin_flag;
	int					stdout_flag;
	int					fd_stdin;
	int					fd_stdout;
	int8_t				lx_error;
	int					is_emty;
	t_list_redirection	*redire;
	t_list_redirection	*redire_h;
	t_lx_list_token		*lx_ls_token;
	t_lx_list_token		*lx_ls_token_h;
	t_minitree			*node;
	t_minitree			*node_h;
	t_list_var_env		*var;
}	t_shell_info;

#endif
