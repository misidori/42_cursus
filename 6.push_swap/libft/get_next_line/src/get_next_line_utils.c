/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:38:38 by misidori          #+#    #+#             */
/*   Updated: 2023/05/13 20:55:22 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/get_next_line.h"

size_t	ft_strlen_gnl(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr_gnl(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	if (c == '\0')
		return ((char *) &s[ft_strlen_gnl(s)]);
	while (s[i])
	{
		if (s[i] == (char) c)
			return ((char *) &s[i]);
		i++;
	}
	return (NULL);
}

char	*ft_strjoin_gnl(char *s, char *b)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	if (!s)
	{
		s = (char *) malloc(sizeof(char));
		s[0] = '\0';
	}
	if (!s || !b)
		return (NULL);
	new_str = (char *) malloc(sizeof(char)
			*(ft_strlen_gnl(s) + ft_strlen_gnl(b)) + 1);
	if (!new_str)
		return (NULL);
	i = -1;
	if (s)
		while (s[++i] != '\0')
			new_str[i] = s[i];
	j = 0;
	while (b[j] != '\0')
		new_str[i++] = b[j++];
	new_str[ft_strlen_gnl(s) + ft_strlen_gnl(b)] = '\0';
	free(s);
	return (new_str);
}
