/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countchr_array.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 19:12:51 by misidori          #+#    #+#             */
/*   Updated: 2023/03/27 16:07:12 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_countchr_array(char **s, char c)
{
	int	counter;
	int	i;
	int	j;

	counter = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i][j])
		{
			if (s[i][j] == c)
				counter++;
			j++;
		}
		j = 0;
		i++;
	}
	return (counter);
}
