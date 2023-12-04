/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:35:29 by misidori          #+#    #+#             */
/*   Updated: 2023/03/27 16:09:27 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len_str;

	len_str = ft_strlen(s);
	while (len_str >= 0)
	{
		if (s[len_str] == (char) c)
			return ((char *)(s + len_str));
		len_str--;
	}
	return (NULL);
}
