/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 01:23:43 by misidori          #+#    #+#             */
/*   Updated: 2023/03/24 21:35:16 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static void	ft_inizialize_variables(t_game *game);
static void	ft_free_memory(t_game *game);

int	main(int argc, char **argv)
{
	t_game	game;

	if (argc == 1)
		ft_strerror_einval();
	else if (argc > 2)
		ft_strerror_einval();
	else if (argc == 2)
	{
		ft_inizialize_variables(&game);
		ft_check_ber_extension(argv[1]);
		ft_create_map_array(argv[1], &game);
		ft_create_window(&game);
		ft_make_graphics(&game);
		ft_scan_map(&game);
		ft_print_counter(&game);
		mlx_key_hook(game.graphics.window, ft_check_pressed_key, &game);
		mlx_loop_hook(game.graphics.mlx_pointer, ft_animation, &game);
		mlx_loop(game.graphics.mlx_pointer);
		ft_free_memory(&game);
	}
	return (0);
}

void	ft_inizialize_variables(t_game *game)
{
	game->map.lose_the_game = 0;
	game->map.win_the_game = 0;
	game->map.check_print_final_move = 0;
	game->graphics.counter = 0;
	game->graphics.size_tile = 64;
	game->image.frame_nemesis = 1;
}

static void	ft_free_memory(t_game *game)
{
	int	i;

	i = 0;
	while (i < game->map.map_height)
	{
		free(game->map.map_array[i]);
		i++;
	}
	free(game->map.map_array);
	mlx_destroy_image(game->graphics.mlx_pointer, game->image.black);
	mlx_destroy_image(game->graphics.mlx_pointer, game->image.collectible);
	mlx_destroy_image(game->graphics.mlx_pointer, game->image.wall);
	mlx_destroy_image(game->graphics.mlx_pointer, game->image.player);
	mlx_destroy_image(game->graphics.mlx_pointer, game->image.nemesis);
	mlx_destroy_image(game->graphics.mlx_pointer, game->image.exit);
}
