/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 19:15:28 by misidori          #+#    #+#             */
/*   Updated: 2023/03/23 20:06:16 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
