/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 06:35:11 by afalconi          #+#    #+#             */
/*   Updated: 2023/11/09 18:04:27 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_count_char(char *str, char c)
{
	int	i;
	int	ret;

	i = -1;
	ret = 0;
	if (str == 0)
		return (0);
	while (str[++i])
	{
		if (str[i] == c)
			ret ++;
	}
	return (ret);
}
