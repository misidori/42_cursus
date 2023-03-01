/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:21:24 by matteo            #+#    #+#             */
/*   Updated: 2023/02/06 18:01:12 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	c_times(char const *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	if (!s)
		return (0);
	if (!c)
		return (1);
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
		{
			counter++;
			if (s[i + 1] == '\0')
				counter--;
		}
		i++;
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	char	**array_strings;
	int		i;
	int		j;

	if (!s)
		return (0);
	i = 0;
	array_strings = malloc ((c_times(s, c) + 2) * sizeof(char *));
	if (!array_strings)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			j = 0;
			while (*s && *s != c && ++j)
				++s;
			array_strings[i++] = ft_substr(s - j, 0, j);
		}
		else
			++s;
	}
	array_strings[i] = 0;
	return (array_strings);
}
