/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bl_export_add_node.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 00:58:00 by matteo            #+#    #+#             */
/*   Updated: 2023/11/30 17:14:19 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

void	ft_name_doesnt_exists_add_new_node(t_node *new_node,
	char *name, char *value)
{
	char	*temp;

	new_node->value = ft_strdup(value);
	temp = ft_strjoin(name, "=");
	new_node->full_info = ft_strjoin(temp, value);
	free(temp);
}

void	ft_name_and_value_dont_exist_add_name(t_node *new_node, char *name)
{
	char	*temp;

	new_node->value = ft_strdup("\"\"");
	temp = ft_strjoin(name, "=");
	new_node->full_info = ft_strjoin(temp, "\"\"");
	free(temp);
}

void	ft_value_doesnt_exists(t_node *new_node, char *name)
{
	new_node->value = NULL;
	new_node->full_info = ft_strdup(name);
}

void	ft_add_new_node_at_the_end_of_list(t_node **head,
	t_node *current, t_node *new_node)
{
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new_node;
}
