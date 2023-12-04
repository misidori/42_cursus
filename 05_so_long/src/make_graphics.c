/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_graphics.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:03:09 by misidori          #+#    #+#             */
/*   Updated: 2023/03/24 23:21:01 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static int	ft_close(void)
{
	exit(0);
}

void	ft_create_window(t_game *game)
{
	game->graphics.mlx_pointer = mlx_init();
	game->graphics.window = mlx_new_window(game->graphics.mlx_pointer,
			(64 * game->map.map_width), (64 * (game->map.map_height) + 64),
			"so_long");
	mlx_hook(game->graphics.window, 17, 0, ft_close, 0);
}

static void	inizialize_tiles_part_one(t_game *game)
{
	game->image.black = mlx_xpm_file_to_image(game->graphics.mlx_pointer,
			"./images/black.xpm", &game->graphics.size_tile,
			&game->graphics.size_tile);
	game->image.collectible = mlx_xpm_file_to_image(game->graphics.mlx_pointer,
			"./images/collectible.xpm", &game->graphics.size_tile,
			&game->graphics.size_tile);
	game->image.exit = mlx_xpm_file_to_image(game->graphics.mlx_pointer,
			"./images/locked_door.xpm", &game->graphics.size_tile,
			&game->graphics.size_tile);
	game->image.nemesis = mlx_xpm_file_to_image(game->graphics.mlx_pointer,
			"./images/ghost_1.xpm", &game->graphics.size_tile,
			&game->graphics.size_tile);
	game->image.player = mlx_xpm_file_to_image(game->graphics.mlx_pointer,
			"./images/player_right.xpm", &game->graphics.size_tile,
			&game->graphics.size_tile);
}

static void	inizialize_tiles_part_two(t_game *game)
{
	game->image.wall = mlx_xpm_file_to_image(game->graphics.mlx_pointer,
			"./images/grey_wall.xpm", &game->graphics.size_tile,
			&game->graphics.size_tile);
	game->image.wasted_small = mlx_xpm_file_to_image(game->graphics.mlx_pointer,
			"./images/wasted_192_71.xpm", &game->graphics.size_tile,
			&game->graphics.size_tile);
	game->image.wasted_big = mlx_xpm_file_to_image(game->graphics.mlx_pointer,
			"./images/wasted_446_165.xpm", &game->graphics.size_tile,
			&game->graphics.size_tile);
	game->image.you_won_small = mlx_xpm_file_to_image(
			game->graphics.mlx_pointer, "./images/win_192_259.xpm",
			&game->graphics.size_tile, &game->graphics.size_tile);
	game->image.you_won_big = mlx_xpm_file_to_image(game->graphics.mlx_pointer,
			"./images/win_381_239.xpm", &game->graphics.size_tile,
			&game->graphics.size_tile);
}

void	ft_make_graphics(t_game *game)
{
	inizialize_tiles_part_one(game);
	inizialize_tiles_part_two(game);
}
