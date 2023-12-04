/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 12:00:40 by matteo            #+#    #+#             */
/*   Updated: 2023/02/06 21:49:39 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*trimmed_str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (start <= end && ft_strchr(set, s1[start]))
		start++;
	while (end >= start && ft_strchr(set, s1[end]))
		end--;
	trimmed_str = (char *) malloc (sizeof(*s1) * (end - start + 2));
	if (!trimmed_str)
		return (NULL);
	i = 0;
	while (start <= end)
		trimmed_str[i++] = s1[start++];
	trimmed_str[i] = 0;
	return ((char *) trimmed_str);
}
