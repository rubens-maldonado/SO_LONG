/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaldona <rmaldona@student42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 01:12:46 by rmaldona          #+#    #+#             */
/*   Updated: 2022/12/22 12:50:19 by rmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	count_elements(t_game	*game, int px, int py)
{
	if (game->mapcopy[px][py] == '1')
		return ;
	if (game->mapcopy[px][py] == 'C')
		game->coin_count++;
	if (game->mapcopy[px][py] == 'E')
	{
		game->exit_count++;
		return ;
	}
	game->mapcopy[px][py] = '1';
	count_elements(game, px + 1, py);
	count_elements(game, px - 1, py);
	count_elements(game, px, py + 1);
	count_elements(game, px, py - 1);
}

void	compare(t_game *game)
{
	free(game->bigline);
	if (game->coin_count != game->contc)
		m_error("INVALID ROUTE\n");
	if (game->exit_count == 0)
		m_error("INVALID ROUTE`\n");
}

void	map_rectangular(t_game *game)
{
	int	lin;
	int	col;
	int	i;

	col = game->col;
	lin = 0;
	i = 0;
	while (game->lin != lin)
	{
		i = 0;
		while (game->map[lin][i])
			i++;
		if (i != col)
			m_error("Map is not rectangular\n");
		lin++;
	}
}

void	read_map(t_game *game, char *argv, int fd)
{
	char	*gnl;
	char	*temp;

	fd = open(argv, O_RDONLY);
	while (1)
	{
		gnl = get_next_line(fd);
		if (!gnl)
			break ;
		if (game->bigline == 0)
		{
			temp = ft_strjoin("", gnl);
			free(game->bigline);
			game->bigline = temp;
		}
		else
		{
			temp = ft_strjoin(game->bigline, gnl);
			free(game->bigline);
			game->bigline = temp;
		}
		game->lin++;
		game->col = ft_strlen(gnl) - 1;
		free(gnl);
	}
}

void	freemap(t_game *game)
{
	int	px;

	px = 0;
	while (game->map[px])
	{
		free(game->map[px]);
		free(game->mapcopy[px]);
		px++;
	}
}
