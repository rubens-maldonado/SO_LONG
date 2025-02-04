/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaldona <rmaldona@student42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 04:49:58 by rmaldona          #+#    #+#             */
/*   Updated: 2022/12/21 13:25:08 by rmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move(t_game *game, int px, int py)
{
	int	npx;
	int	npy;

	npx = game->px;
	npy = game->py;
	if (game->map[px][py] == 'C')
	{
		ft_printf("steps = %i\n", game->steps++);
		game->contc--;
		game->map[npx][npy] = '0';
	}
	if (game->map[px][py] == '0')
	{
		ft_printf("steps = %i\n", game->steps++);
		game->map[npx][npy] = '0';
	}
	if ((game->map[px][py] == 'E' && game->contc != 0) ||
			(game->map[px][py] == '1'))
		return ;
	if (game->map[px][py] == 'E' && game->contc == 0)
		exit(EXIT_FAILURE);
	game->px = px;
	game->py = py;
	game->map[px][py] = 'P';
	render_img(game);
}

int	preskey(int keycode, t_game *game)
{
	if (keycode == KEYUP)
	{
		new_img(game, PLAYER);
		move(game, game->px - 1, game->py);
	}
	if (keycode == KEYDOWN)
	{
		new_img(game, PLAYER);
		move(game, game->px + 1, game->py);
	}
	if (keycode == KEYRIGHT)
	{
		new_img(game, PLAYER);
		move(game, game->px, game->py + 1);
	}
	if (keycode == KEYLEFT)
	{
		new_img(game, PLAYER);
		move(game, game->px, game->py - 1);
	}
	if (keycode == ESC)
		destroy(game);
	return (0);
}

void	destroy(t_game *game)
{
	mlx_destroy_image(game->mlx_ptr, game->wall);
	mlx_destroy_image(game->mlx_ptr, game->floor);
	mlx_destroy_image(game->mlx_ptr, game->colect);
	mlx_destroy_image(game->mlx_ptr, game->exit);
	mlx_destroy_image(game->mlx_ptr, game->player);
	mlx_destroy_window(game->mlx_ptr, game->mlx_win);
	free(game->mlx_ptr);
	free(game->map);
	exit(EXIT_FAILURE);
}

int	closed_x(t_game *game)
{
	mlx_destroy_image(game->mlx_ptr, game->wall);
	mlx_destroy_image(game->mlx_ptr, game->floor);
	mlx_destroy_image(game->mlx_ptr, game->colect);
	mlx_destroy_image(game->mlx_ptr, game->exit);
	mlx_destroy_image(game->mlx_ptr, game->player);
	mlx_destroy_window(game->mlx_ptr, game->mlx_win);
	free(game->mlx_ptr);
	free(game->map);
	exit(0);
	return (1);
}
