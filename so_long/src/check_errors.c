/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 01:48:15 by misidori          #+#    #+#             */
/*   Updated: 2023/03/24 21:44:17 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	ft_strerror_einval(void)
{
	ft_printf("Error\n%s\n", strerror(EINVAL));
	exit (1);
}

void	ft_strerror_ebadf(void)
{
	ft_printf("Error\n%s\n", strerror(EBADF));
	exit (1);
}

void	ft_check_ber_extension(char *argv)
{
	char	map_file_extension[5];
	int		len;
	int		valid_extension;

	len = ft_strlen(argv);
	valid_extension = 1;
	ft_strlcpy(map_file_extension, argv + len - 4, 5);
	map_file_extension[4] = '\0';
	valid_extension = ft_strcmp(map_file_extension, ".ber");
	if (valid_extension != 0)
	{
		ft_printf("Error\nMap not correct. Please insert a .ber map\n");
		exit (1);
	}
}

void	ft_check_errors(t_game *game)
{
	ft_check_lenght_strings_in_array(game);
	ft_check_missing_element(game);
	ft_check_only_allowed_elements(game);
	ft_check_up_bottom(game->map.map_array, 0, game->map.map_width);
	ft_check_walls(game->map.map_array, game->map.map_height -1, 0);
	ft_check_walls(game->map.map_array, game->map.map_height -1,
		game->map.map_width -1);
	ft_check_up_bottom(game->map.map_array, game->map.map_height -1,
		game->map.map_width);
}
