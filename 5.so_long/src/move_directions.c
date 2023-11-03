/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_directions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:01:40 by misidori          #+#    #+#             */
/*   Updated: 2023/03/24 22:05:18 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	ft_move_up(t_game *game)
{
	mlx_clear_window(game->graphics.mlx_pointer, game->graphics.window);
	game->graphics.counter++;
	if (game->map.map_array[game->player.x - 1][game->player.y] == '0' ||
		game->map.map_array[game->player.x - 1][game->player.y] == 'C')
	{
		if (game->map.map_array[game->player.x - 1][game->player.y] == 'C')
			ft_door_open(game);
		game->map.map_array[game->player.x - 1][game->player.y] = 'P';
		game->map.map_array[game->player.x][game->player.y] = '0';
	}
	else if (game->map.map_array[game->player.x - 1][game->player.y] == 'E')
	{
		if (game->map.n_collectibles == 0)
			game->map.win_the_game = 1;
	}
	else if (game->map.map_array[game->player.x - 1][game->player.y] == 'N')
		game->map.lose_the_game = 1;
	ft_scan_map(game);
	if (game->map.lose_the_game == 0 || game->map.win_the_game == 0)
		ft_print_counter(game);
}

void	ft_move_down(t_game *game)
{
	mlx_clear_window(game->graphics.mlx_pointer, game->graphics.window);
	game->graphics.counter++;
	if (game->map.map_array[game->player.x + 1][game->player.y] == '0' ||
		game->map.map_array[game->player.x + 1][game->player.y] == 'C')
	{
		if (game->map.map_array[game->player.x + 1][game->player.y] == 'C')
			ft_door_open(game);
		game->map.map_array[game->player.x + 1][game->player.y] = 'P';
		game->map.map_array[game->player.x][game->player.y] = '0';
	}
	else if (game->map.map_array[game->player.x + 1][game->player.y] == 'E')
	{
		if (game->map.n_collectibles == 0)
			game->map.win_the_game = 1;
	}
	else if (game->map.map_array[game->player.x + 1][game->player.y] == 'N')
		game->map.lose_the_game = 1;
	ft_scan_map(game);
	if (game->map.lose_the_game == 0 || game->map.win_the_game == 0)
		ft_print_counter(game);
}

void	ft_move_left(t_game *game)
{
	mlx_clear_window(game->graphics.mlx_pointer, game->graphics.window);
	game->graphics.counter++;
	game->image.player = mlx_xpm_file_to_image(game->graphics.mlx_pointer,
			"./images/player_left.xpm", &game->graphics.size_tile,
			&game->graphics.size_tile);
	if (game->map.map_array[game->player.x][game->player.y - 1] == '0' ||
		game->map.map_array[game->player.x][game->player.y - 1] == 'C')
	{
		if (game->map.map_array[game->player.x][game->player.y - 1] == 'C')
			ft_door_open(game);
		game->map.map_array[game->player.x][game->player.y - 1] = 'P';
		game->map.map_array[game->player.x][game->player.y] = '0';
	}
	else if (game->map.map_array[game->player.x][game->player.y - 1] == 'E')
	{
		if (game->map.n_collectibles == 0)
			game->map.win_the_game = 1;
	}
	else if (game->map.map_array[game->player.x][game->player.y - 1] == 'N')
		game->map.lose_the_game = 1;
	ft_scan_map(game);
	if (game->map.lose_the_game == 0 || game->map.win_the_game == 0)
		ft_print_counter(game);
}

void	ft_move_right(t_game *game)
{
	mlx_clear_window(game->graphics.mlx_pointer, game->graphics.window);
	game->graphics.counter++;
	game->image.player = mlx_xpm_file_to_image(game->graphics.mlx_pointer,
			"./images/player_right.xpm", &game->graphics.size_tile,
			&game->graphics.size_tile);
	if (game->map.map_array[game->player.x][game->player.y + 1] == '0' ||
		game->map.map_array[game->player.x][game->player.y + 1] == 'C')
	{
		if (game->map.map_array[game->player.x][game->player.y + 1] == 'C')
			ft_door_open(game);
		game->map.map_array[game->player.x][game->player.y + 1] = 'P';
		game->map.map_array[game->player.x][game->player.y] = '0';
	}
	else if (game->map.map_array[game->player.x][game->player.y + 1] == 'E')
	{
		if (game->map.n_collectibles == 0)
			game->map.win_the_game = 1;
	}
	else if (game->map.map_array[game->player.x][game->player.y + 1] == 'N')
		game->map.lose_the_game = 1;
	ft_scan_map(game);
	if (game->map.lose_the_game == 0 || game->map.win_the_game == 0)
		ft_print_counter(game);
}
