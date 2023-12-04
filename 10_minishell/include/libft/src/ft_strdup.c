/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 19:56:25 by misidori          #+#    #+#             */
/*   Updated: 2023/08/05 05:39:03 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s1) + 1;
	if (!s1)
		return (0);
	copy = (char *) malloc(len * sizeof(char));
	if (!copy)
		return (0);
	while (i < len)
	{
		copy[i] = s1[i];
		i++;
	}
	return (copy);
}
