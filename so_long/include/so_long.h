/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 10:54:04 by misidori          #+#    #+#             */
/*   Updated: 2023/03/24 23:21:56 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../mlx/include/mlx.h"
# include "../libft/include/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>

typedef struct s_map
{
	char	*map_file_extension;
	char	*map_str;
	char	**map_array;
	int		map_width;
	int		map_height;
	int		map_exit;
	int		map_collectible;
	int		map_player;
	int		n_collectibles;
	char	*counter_moves;
	int		lose_the_game;
	int		win_the_game;
	int		check_print_final_move;
}				t_map;

typedef struct s_coordinates
{
	int	x;
	int	y;
}		t_coordinates;

typedef struct s_graphics
{
	void	*mlx_pointer;
	void	*window;
	int		counter;
	int		size_tile;
	int		loop;
}				t_graphics;

typedef struct s_image
{
	void	*black;
	void	*collectible;
	void	*exit;
	void	*nemesis;
	void	*player;
	void	*wall;
	void	*wasted_small;
	void	*wasted_big;
	void	*you_won_small;
	void	*you_won_big;
	int		frame_nemesis;
}				t_image;

typedef struct s_game
{
	t_graphics		graphics;
	t_map			map;
	t_coordinates	player;
	t_image			image;
}				t_game;

void	ft_check_ber_extension(char *s);
void	ft_check_errors(t_game *game);
void	ft_move_up(t_game *game);
void	ft_move_left(t_game *game);
void	ft_move_right(t_game *game);
void	ft_move_down(t_game *game);
int		ft_check_up_bottom(char **array, int row, int map_width);
int		ft_check_walls(char **array, int map_height, int column);
void	ft_check_missing_element(t_game *game);
void	ft_check_only_allowed_elements(t_game *game);
void	ft_check_lenght_strings_in_array(t_game *game);
void	ft_make_graphics(t_game *game);
void	ft_scan_map(t_game *game);
int		ft_check_pressed_key(int key, t_game *game);
void	ft_print_counter(t_game *game);
void	ft_create_map_array(char *argv, t_game *game);
void	ft_lost(t_game *game);
void	ft_won(t_game *game);
void	ft_strerror_einval(void);
void	ft_strerror_ebadf(void);
int		ft_animation(t_game *game);
void	ft_print_final_move(t_game *game);
void	ft_block_the_player(t_game *game);
void	ft_door_open(t_game *game);
void	ft_create_window(t_game *game);
void	ft_put_wall_img(t_game *game, int i, int j);
void	ft_put_background_img(t_game *game, int i, int j);
void	ft_put_exit_img(t_game *game, int i, int j);
void	ft_put_collectible_img(t_game *game, int i, int j);
void	ft_put_nemesis_img(t_game *game, int i, int j);
void	ft_put_player_img(t_game *game, int i, int j);

#endif
