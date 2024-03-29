/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:47:43 by misidori          #+#    #+#             */
/*   Updated: 2023/03/27 16:08:13 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;
	size_t			i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	destination = (unsigned char *) dst;
	source = (unsigned char *) src;
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (dst);
}
