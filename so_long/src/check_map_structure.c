/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_structure.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:19:46 by misidori          #+#    #+#             */
/*   Updated: 2023/03/24 22:22:19 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	ft_check_up_bottom(char **array, int row, int map_width)
{
	int	wall;
	int	i;

	if (!array || !array[row])
		return (0);
	wall = 1;
	i = 0;
	while (i < map_width)
	{
		if (array[row][i] == '1')
			wall = 1;
		else
		{
			wall = 0;
			ft_printf("Error\nThe map doesn't have solid borders\n");
			exit(1);
		}
		i++;
	}
	return (wall);
}

int	ft_check_walls(char **array, int map_height, int column)
{
	int	wall;
	int	i;

	if (!array)
		return (0);
	wall = 1;
	i = 0;
	while (i < map_height)
	{
		if (array[i][column] == '1')
			wall = 1;
		else
		{
			wall = 0;
			ft_printf("Error\nThe map doesn't have solid borders\n");
			exit(1);
		}
		i++;
	}
	return (wall);
}

void	ft_check_missing_element(t_game *game)
{
	game->map.map_collectible = ft_countchr_str(game->map.map_str, 'C');
	if (game->map.map_collectible == 0)
	{
		ft_printf("Error\nCollectible not found on the map.\n");
		exit(1);
	}
	game->map.map_exit = ft_countchr_str(game->map.map_str, 'E');
	if (game->map.map_exit == 0)
	{
		ft_printf("Error\nExit not found on the map.\n");
		exit(1);
	}
	game->map.map_player = ft_countchr_str(game->map.map_str, 'P');
	if (game->map.map_player == 0)
	{
		ft_printf("Error\nPlayer not found on the map.\n");
		exit(1);
	}
}

void	ft_check_only_allowed_elements(t_game *game)
{
	int	i;

	i = 0;
	while (game->map.map_str[i])
	{
		if (game->map.map_str[i] != '0' && game->map.map_str[i] != '1'
			&& game->map.map_str[i] != 'C' && game->map.map_str[i] != 'E'
			&& game->map.map_str[i] != 'N' && game->map.map_str[i] != 'P'
			&& game->map.map_str[i] != '\n')
		{
			ft_printf("Error\nElement non valid\n");
			exit(1);
		}
		i++;
	}
}

void	ft_check_lenght_strings_in_array(t_game *game)
{
	int	i;
	int	len;

	i = 0;
	while (i < (game->map.map_height))
	{
		len = ft_strlen(game->map.map_array[i]);
		if (len != game->map.map_width)
		{
			ft_printf("Error\nThe map doesn't have a regular shape\n");
			exit(1);
		}
		i++;
	}
}
