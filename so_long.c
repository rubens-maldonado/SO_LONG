/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaldona <rmaldona@student42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:37:22 by rmaldona          #+#    #+#             */
/*   Updated: 2022/12/22 12:44:52 by rmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	int		i;
	t_game	game;

	i = 0;
	if (argc == 2)
	{
		value(&game);
		if (ft_strrncmp(argv[1], ".ber", 5))
			m_error("format map error\n");
		create_map(&game, argv[1]);
		draw_map(&game);
		check_caracter(&game);
		search_p(&game);
		map_rectangular(&game);
		game.mlx_ptr = mlx_init();
		screen(&game);
		mlx_key_hook(game.mlx_win, preskey, &game);
		mlx_hook(game.mlx_win, 17, 0, closed_x, &game);
		mlx_loop(game.mlx_ptr);
		freemap(&game);
		free(game.map);
		free(game.mapcopy);
	}
	else
		m_error("WRONG ARGV COUNT\n");
}
