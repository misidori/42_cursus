/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 21:50:57 by misidori          #+#    #+#             */
/*   Updated: 2023/03/01 17:51:54 by misidori         ###   ########.fr       */
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
	int		fd;
	char	*str;

	fd = open("La Divina Commedia.txt", O_RDONLY);
	str = malloc(BUFFER_SIZE + 1);
	printf("BUFFER_SIZE: %d\n", BUFFER_SIZE);
	printf("fd[%d] : %s", fd, get_next_line(fd));
	printf("fd[%d] : %s", fd, get_next_line(fd));
	while (str != NULL)
	{
		printf("ciao : %s", str);
		free(str);
		str = get_next_line(fd);
	}
	close(fd);
	return (0);
}
