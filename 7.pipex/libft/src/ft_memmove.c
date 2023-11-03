/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:12:16 by misidori          #+#    #+#             */
/*   Updated: 2023/03/27 16:08:18 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*destination;
	const char	*source;

	if (!dst && !src)
		return (NULL);
	destination = (char *)dst;
	source = (const char *)src;
	if (dst < src)
	{
		while (len--)
			*destination++ = *source++;
	}
	else
	{
		destination = destination + len;
		source = source + len;
		while (len--)
			*--destination = *--source;
	}
	return (dst);
}
