/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strerror_einval.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 18:22:31 by misidori          #+#    #+#             */
/*   Updated: 2023/05/27 23:19:43 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_strerror_einval(void)
{
	ft_putstr_fd("\033[31mError: ", 2);
	ft_putstr_fd(strerror(EINVAL), 2);
	ft_putstr_fd("\n\e[0m", 2);
	exit (1);
}
