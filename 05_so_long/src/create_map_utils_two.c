/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map_utils_two.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 21:29:53 by misidori          #+#    #+#             */
/*   Updated: 2023/03/24 21:33:32 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	ft_put_collectible_img(t_game *game, int i, int j)
{
	mlx_put_image_to_window(game->graphics.mlx_pointer,
		game->graphics.window, game->image.collectible, j * 64, (i + 1) * 64);
}

void	ft_put_nemesis_img(t_game *game, int i, int j)
{
	mlx_put_image_to_window(game->graphics.mlx_pointer,
		game->graphics.window, game->image.nemesis, j * 64, (i + 1) * 64);
}

void	ft_put_player_img(t_game *game, int i, int j)
{
	mlx_put_image_to_window(game->graphics.mlx_pointer,
		game->graphics.window, game->image.player, j * 64, (i + 1) * 64);
	game->player.x = i;
	game->player.y = j;
}
