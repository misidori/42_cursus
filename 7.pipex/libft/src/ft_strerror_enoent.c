/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strerror_enoent.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 23:19:27 by matteo            #+#    #+#             */
/*   Updated: 2023/05/27 23:46:46 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_strerror_enoent(void)
{
	ft_putstr_fd("\033[31mError: ", 2);
	ft_putstr_fd(strerror(ENOENT), 2);
	ft_putstr_fd("\n\e[0m", 2);
	exit (1);
}
