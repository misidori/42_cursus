/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:35:29 by misidori          #+#    #+#             */
/*   Updated: 2023/02/06 21:47:48 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
