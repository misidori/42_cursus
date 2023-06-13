/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strerror_errno.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 23:46:38 by matteo            #+#    #+#             */
/*   Updated: 2023/06/08 21:03:35 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_strerror_errno(void)
{
	ft_putstr_fd("\033[31mError: ", 2);
	ft_putstr_fd(strerror(errno), 2);
	ft_putstr_fd("\n\e[0m", 2);
	exit (1);
}
