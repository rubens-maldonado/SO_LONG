/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   screen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaldona <rmaldona@student42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 15:29:54 by rmaldona          #+#    #+#             */
/*   Updated: 2022/12/22 12:44:30 by rmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_image(t_game *gm)
{
	gm->player = mlx_xpm_file_to_image(gm->mlx_ptr, PLAYER, &gm->px1, &gm->py1);
	gm->floor = mlx_xpm_file_to_image(gm->mlx_ptr, FLOOR, &gm->px1, &gm->py1);
	gm->wall = mlx_xpm_file_to_image(gm->mlx_ptr, WALL, &gm->px1, &gm->py1);
	gm->exit = mlx_xpm_file_to_image(gm->mlx_ptr, EXIT, &gm->px1, &gm->py1);
	gm->colect = mlx_xpm_file_to_image(gm->mlx_ptr, COLECT, &gm->px1, &gm->py1);
}

void	next_img(t_game *game, char *img, int i, int j)
{
	mlx_put_image_to_window(game->mlx_ptr, game->mlx_win, img, i, j);
}

void	render_img(t_game *game)
{
	int	i;
	int	j;

	j = 0;
	while (j < game->lin)
	{
		i = 0;
		while (game->map[j][i])
		{
			next_img(game, game->floor, PX * i, PX * j);
			if (game->map[j][i] == '1')
				next_img(game, game->wall, PX * i, PX * j);
			else if (game->map[j][i] == 'P')
				next_img(game, game->player, PX * i, PX * j);
			else if (game->map[j][i] == 'C')
				next_img(game, game->colect, PX * i, PX * j);
			else if (game->map[j][i] == 'E')
				next_img(game, game->exit, PX * i, PX * j);
			else if (game->map[j][i] == '\n')
				break ;
			i++;
		}
		j++;
	}
}

void	new_img(t_game *gm, char *img)
{
	mlx_destroy_image(gm->mlx_ptr, gm->player);
	gm->player = mlx_xpm_file_to_image(gm->mlx_ptr, img, &gm->px1, &gm->py1);
}

void	screen(t_game *game)
{
	if (!game->mlx_ptr)
	{
		free(game->mlx_ptr);
		m_error("Not MLX");
	}
	game->mlx_win = mlx_new_window(game->mlx_ptr, PX * game->col,
			PX * game->lin, "WINDOW");
	if (!game->mlx_win)
	{
		free(game->mlx_win);
		m_error("Not window");
	}
	put_image(game);
	render_img(game);
}
