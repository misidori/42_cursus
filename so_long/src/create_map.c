/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:15:30 by misidori          #+#    #+#             */
/*   Updated: 2023/03/24 21:28:08 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	ft_create_map_array(char *argv, t_game *game)
{
	int	fd;

	fd = open(argv, O_RDONLY);
	if (fd == -1)
	{
		ft_printf("Error\n%s\n", strerror(EBADF));
		exit (1);
	}
	game->map.map_str = malloc(sizeof(char) * 1000000000);
	if (!game->map.map_str)
		return ;
	read(fd, game->map.map_str, 1000000000);
	game->map.map_height = ft_countchr_str(game->map.map_str, '\n') + 1;
	game->map.map_array = ft_split(game->map.map_str, '\n');
	game->map.map_width = ft_strlen(game->map.map_array[0]);
	ft_check_errors(game);
	free(game->map.map_str);
	close(fd);
}

static void	ft_draw_map(t_game *game, int i, int j)
{
	if (game->map.map_array[i][j] == '1')
		ft_put_wall_img(game, i, j);
	else if (game->map.map_array[i][j] == '0')
		ft_put_background_img(game, i, j);
	else if (game->map.map_array[i][j] == 'E')
		ft_put_exit_img(game, i, j);
	else if (game->map.map_array[i][j] == 'C')
		ft_put_collectible_img(game, i, j);
	else if (game->map.map_array[i][j] == 'N')
		ft_put_nemesis_img(game, i, j);
	else if (game->map.map_array[i][j] == 'P')
		ft_put_player_img(game, i, j);
}

void	ft_scan_map(t_game *game)
{
	int	i;
	int	j;

	i = -1;
	while (game->map.map_array[++i])
	{
		j = -1;
		while (game->map.map_array[i][++j])
			ft_draw_map(game, i, j);
	}
	if (game->map.lose_the_game == 1)
		ft_lost(game);
	if (game->map.win_the_game == 1)
		ft_won(game);
}
