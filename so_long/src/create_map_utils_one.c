/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map_utils_one.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 21:29:42 by misidori          #+#    #+#             */
/*   Updated: 2023/03/24 21:33:03 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	ft_put_wall_img(t_game *game, int i, int j)
{
	mlx_put_image_to_window(game->graphics.mlx_pointer,
		game->graphics.window, game->image.wall, j * 64, (i + 1) * 64);
}

void	ft_put_background_img(t_game *game, int i, int j)
{
	mlx_put_image_to_window(game->graphics.mlx_pointer,
		game->graphics.window, game->image.black, j * 64, (i + 1) * 64);
}

void	ft_put_exit_img(t_game *game, int i, int j)
{
	mlx_put_image_to_window(game->graphics.mlx_pointer,
		game->graphics.window, game->image.exit, j * 64, (i + 1) * 64);
}
