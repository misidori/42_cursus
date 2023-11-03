/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_printcounter_animation.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 18:24:02 by misidori          #+#    #+#             */
/*   Updated: 2023/03/24 21:38:46 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	ft_check_pressed_key(int key, t_game *game)
{
	game->map.n_collectibles = ft_countchr_array(game->map.map_array, 'C');
	if (key == 13 || key == 126)
		ft_move_up(game);
	else if (key == 1 || key == 125)
		ft_move_down(game);
	else if (key == 0 || key == 123)
		ft_move_left(game);
	else if (key == 2 || key == 124)
		ft_move_right(game);
	else if (key == 53)
		exit(0);
	return (game->graphics.counter);
}

void	ft_print_counter(t_game *game)
{
	if (game->map.win_the_game == 0 && game->map.lose_the_game == 0)
	{
		game->map.counter_moves = ft_itoa(game->graphics.counter);
		mlx_string_put(game->graphics.mlx_pointer, game->graphics.window,
			8, 16, 0xFFFFFF, "----------------");
		mlx_string_put(game->graphics.mlx_pointer, game->graphics.window,
			12, 16, 0xFFFFFF, "|");
		mlx_string_put(game->graphics.mlx_pointer, game->graphics.window,
			12, 56, 0xFFFFFF, "|");
		mlx_string_put(game->graphics.mlx_pointer, game->graphics.window,
			20, 36, 0xFFFFFF, "MOVES: ");
		mlx_string_put(game->graphics.mlx_pointer, game->graphics.window,
			68, 36, 0xFFFFFF, game->map.counter_moves);
		ft_printf("MOVES: %d\n", game->graphics.counter);
		mlx_string_put(game->graphics.mlx_pointer, game->graphics.window,
			108, 16, 0xFFFFFF, "|");
		mlx_string_put(game->graphics.mlx_pointer, game->graphics.window,
			108, 56, 0xFFFFFF, "|");
		mlx_string_put(game->graphics.mlx_pointer, game->graphics.window,
			8, 56, 0xFFFFFF, "----------------");
		free(game->map.counter_moves);
	}
}

int	ft_animation(t_game *game)
{
	if (game->graphics.loop < 5000)
	{
		game->graphics.loop++;
		return (0);
	}
	game->graphics.loop = 0;
	if (game->image.frame_nemesis == 1)
		game->image.nemesis = mlx_xpm_file_to_image(game->graphics.mlx_pointer,
				"./images/ghost_2.xpm", &game->graphics.size_tile,
				&game->graphics.size_tile);
	else
	{
		game->image.nemesis = mlx_xpm_file_to_image(game->graphics.mlx_pointer,
				"./images/ghost_1.xpm", &game->graphics.size_tile,
				&game->graphics.size_tile);
		game->image.frame_nemesis = 0;
	}
	ft_scan_map(game);
	game->image.frame_nemesis++;
	return (0);
}
