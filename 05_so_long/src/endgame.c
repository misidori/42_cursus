/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   endgame.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 18:43:31 by misidori          #+#    #+#             */
/*   Updated: 2023/03/24 21:42:35 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	ft_door_open(t_game *game)
{
	game->map.n_collectibles--;
	if (game->map.n_collectibles == 0)
	{
		game->image.exit = mlx_xpm_file_to_image(game->graphics.mlx_pointer,
				"./images/open_door.xpm", &game->graphics.size_tile,
				&game->graphics.size_tile);
	}
}

void	ft_block_the_player(t_game *game)
{
	game->map.map_array[game->player.x - 1][game->player.y] = '1';
	game->map.map_array[game->player.x + 1][game->player.y] = '1';
	game->map.map_array[game->player.x][game->player.y - 1] = '1';
	game->map.map_array[game->player.x][game->player.y + 1] = '1';
}

void	ft_print_final_move(t_game *game)
{
	if (game->map.check_print_final_move == 0)
	{
		ft_printf("MOVES: %d\n", game->graphics.counter);
		game->map.check_print_final_move = 1;
	}
}

void	ft_won(t_game *game)
{
	game->map.win_the_game = 1;
	ft_print_final_move(game);
	mlx_clear_window(game->graphics.mlx_pointer, game->graphics.window);
	if (game->map.map_width < 8)
	{
		mlx_put_image_to_window(game->graphics.mlx_pointer,
			game->graphics.window, game->image.you_won_small,
			(game->map.map_width * 64 - 192) / 2,
			((game->map.map_height * 64 - 259) / 2) + 22);
		ft_block_the_player(game);
	}
	else
	{
		mlx_put_image_to_window(game->graphics.mlx_pointer,
			game->graphics.window, game->image.you_won_big,
			(game->map.map_width * 64 - 381) / 2,
			((game->map.map_height * 64 - 239) / 2) + 22);
		ft_block_the_player(game);
	}
}

void	ft_lost(t_game *game)
{
	ft_print_final_move(game);
	mlx_clear_window(game->graphics.mlx_pointer, game->graphics.window);
	if (game->map.map_width < 8)
	{
		mlx_put_image_to_window(game->graphics.mlx_pointer,
			game->graphics.window, game->image.wasted_small,
			(game->map.map_width * 64 - 192) / 2,
			((game->map.map_height * 64 - 71) / 2) + 22);
		ft_block_the_player(game);
	}
	else
	{
		mlx_put_image_to_window(game->graphics.mlx_pointer,
			game->graphics.window, game->image.wasted_big,
			(game->map.map_width * 64 - 446) / 2,
			((game->map.map_height * 64 - 165) / 2 + 22));
		ft_block_the_player(game);
	}
}
