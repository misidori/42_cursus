/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 00:22:46 by misidori          #+#    #+#             */
/*   Updated: 2023/02/20 22:10:36 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read_file(int fd, char *stash)
{
	char	*buffer;
	int		ret_read;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	ret_read = 1;
	while (!ft_strchr(stash, '\n') && ret_read != 0)
	{
		ret_read = read(fd, buffer, BUFFER_SIZE);
		if (ret_read == -1)
		{
			free (buffer);
			return (NULL);
		}
		buffer[ret_read] = '\0';
		stash = ft_strjoin(stash, buffer);
	}
	free(buffer);
	return (stash);
}

char	*get_line(char *stash)
{
	char	*line;
	int		i;

	i = 0;
	if (!stash[i])
		return (NULL);
	while (stash[i] && stash[i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
	{
		line[i] = stash[i];
		i++;
	}
	if (stash[i] == '\n')
	{
		line[i] = stash[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_reduce_stash(char *stash)
{
	char	*reduced_stash;
	int		i;
	int		j;

	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (!stash[i])
	{
		free(stash);
		return (NULL);
	}
	reduced_stash = malloc(sizeof(char) * (ft_strlen(stash) - i + 1));
	if (!reduced_stash)
		return (NULL);
	i++;
	j = 0;
	while (stash[i])
	{
		reduced_stash[j++] = stash[i++];
	}
	reduced_stash[j] = '\0';
	free(stash);
	return (reduced_stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	stash = ft_read_file(fd, stash);
	if (!stash)
		return (NULL);
	line = get_line(stash);
	stash = ft_reduce_stash(stash);
	return (line);
}
