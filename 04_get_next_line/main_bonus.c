/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 21:41:35 by misidori          #+#    #+#             */
/*   Updated: 2023/02/20 21:44:59 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line.h"
#include <sys/types.h>
#include <sys/uio.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
#endif

int	main(void)
{
	int		fd_3;
	int		fd_4;
	char	*str;

	fd_3 = open("La Divina Commedia.txt", O_RDONLY);
	fd_4 = open("Il cinque maggio.txt", O_RDONLY);
	str = malloc(BUFFER_SIZE + 1);
	printf("BUFFER_SIZE: %d\n", BUFFER_SIZE);
	printf("fd[%d] : %s", fd_3, get_next_line(fd_3));
	printf("fd[%d] : %s", fd_4, get_next_line(fd_4));
	printf("fd[%d] : %s", fd_3, get_next_line(fd_3));
	printf("fd[%d] : %s", fd_4, get_next_line(fd_4));
/*
	while (str != NULL)
	{
		printf("%s", str);
		free(str);
		str = get_next_line(fd);
	}
*/
	close(fd_3);
	close(fd_4);
	return (0);
}
