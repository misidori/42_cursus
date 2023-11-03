/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 19:15:28 by misidori          #+#    #+#             */
/*   Updated: 2023/03/27 16:08:25 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_print_array(char **array_strings)
{
	int	i;

	i = 0;
	while (array_strings[i])
	{
		ft_printf("%s\n", array_strings[i]);
		i++;
	}
}
