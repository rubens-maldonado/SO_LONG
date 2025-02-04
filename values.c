/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   values.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaldona <rmaldona@student42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 00:09:14 by rmaldona          #+#    #+#             */
/*   Updated: 2022/12/22 12:46:00 by rmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	value(t_game *game)
{
	game->px1 = 0;
	game->py1 = 0;
	game->px = 0;
	game->py = 0;
	game->lin = 0;
	game->col = 0;
	game->exit_count = 0;
	game->coin_count = 0;
	game->move_count = 0;
	game->contc = 0;
	game->exitc = 1;
	game->bigline = NULL;
	game->map = NULL;
	game->mapcopy = NULL;
	game->mlx_ptr = 0;
	game->mlx_win = 0;
	game->player = 0;
	game->floor = 0;
	game->wall = 0;
	game->colect = 0;
	game->exit = 0;
	game->steps = 1;
}
