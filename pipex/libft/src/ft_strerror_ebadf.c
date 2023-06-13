/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strerror_ebadf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 19:07:19 by matteo            #+#    #+#             */
/*   Updated: 2023/05/27 19:16:40 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_strerror_ebadf(void)
{
	ft_putstr_fd("\033[31mError: ", 2);
	ft_putstr_fd(strerror(EBADF), 2);
	ft_putstr_fd("\n\e[0m", 2);
	exit (1);
}
