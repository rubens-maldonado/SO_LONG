/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaldona <rmaldona@student42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 00:04:59 by rmaldona          #+#    #+#             */
/*   Updated: 2022/12/20 14:58:27 by rmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	create_map(t_game *game, char *argv)
{
	int	fd;

	fd = open(argv, O_RDONLY);
	if (fd == -1)
		m_error("invalid argument\n");
	read_map(game, argv, fd);
	if (game->bigline == NULL || game->bigline[0] == '\n')
		m_error("ERROR MAP\n");
	if (ft_strnstr(game->bigline, "\n\n", ft_strlen(game->bigline)))
		m_error("Two break line\n");
}

void	draw_map(t_game	*game)
{
	int	colmap;
	int	linemap;

	game->map = ft_split(game->bigline, '\n');
	game->mapcopy = ft_split(game->bigline, '\n');
	colmap = 0;
	linemap = game->lin - 1;
	if (game->col == game->lin)
		m_error("map is not rectangular\n");
	while (colmap != game->col)
	{
		if (game->map[0][colmap] != '1' ||
				game->map[game->lin - 1][colmap] != '1')
			m_error("wall invalid\n");
		else
			colmap++;
	}
	while (linemap > 0)
	{
		if (game->map[linemap][game->col - 1] != '1' ||
				game->map[linemap][0] != '1')
			m_error("wall invalid\n");
		else
			linemap--;
	}
}

void	check_caracter(t_game *game)
{
	int	contp;
	int	conte;
	int	i;

	contp = 0;
	conte = 0;
	game->contc = 0;
	i = 0;
	while (game->bigline[i] != '\0')
	{
		if (!ft_strchr("PEC01\n", game->bigline[i]))
			m_error("invalid caracter\n");
		if (game->bigline[i] == 'P')
			contp++;
		if (game->bigline[i] == 'C')
			game->contc++;
		if (game->bigline[i] == 'E')
			conte++;
		i++;
	}
	if (contp != 1 || conte != 1 || game->contc < 1)
		m_error("wrong amount character\n");
}

void	search_p(t_game *game)
{
	int	px;
	int	py;

	px = 0;
	py = 0;
	while (game->map[px][py] != 'P')
	{
		py = 0;
		while (game->map[px][py] != '\0' && game->map[px][py] != '\n')
		{
			if (game->map[px][py] == 'P')
				break ;
			py++;
		}
		if (game->map[px][py] == 'P')
			break ;
		px++;
	}
	game->px = px;
	game->py = py;
	count_elements(game, px, py);
	compare(game);
}

void	m_error(char *msg)
{
	ft_printf("Error:\n%s", msg);
	exit(EXIT_FAILURE);
}
