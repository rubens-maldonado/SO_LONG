/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaldona <rmaldona@student42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:40:35 by rmaldona          #+#    #+#             */
/*   Updated: 2022/12/17 18:07:21 by rmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "./mlx/mlx.h"
# include "./libft/libft.h"
# include "./libft/get_next_line.h"
# include "./printf/ft_printf.h"
# include <fcntl.h>

# define PX 64
# define FLOOR	"./img/floor.xpm"
# define PLAYER	"./img/right.xpm"
# define WALL	"./img/wall.xpm"
# define EXIT	"./img/exit.xpm"
# define COLECT	"./img/coin.xpm"

# define KEYUP 13
# define KEYDOWN 1
# define KEYLEFT 0
# define KEYRIGHT 2
# define ESC 53

typedef struct s_game
{
	void	*mlx_ptr;
	void	*mlx_win;
	int		px1;
	int		py1;
	int		px;
	int		py;
	int		lin;
	int		col;
	int		exit_count;
	int		coin_count;
	int		move_count;
	int		contc;
	int		exitc;
	int		steps;
	char	*bigline;
	char	**map;
	char	**mapcopy;
	char	*player;
	char	*floor;
	char	*wall;
	char	*colect;
	char	*exit;
}			t_game;

void	create_map(t_game *game, char *argv);
void	m_error(char *msg);
void	draw_map(t_game *game);
void	check_caracter(t_game *game);
void	count_elements(t_game *game, int px, int py);
void	compare(t_game *game);
void	search_p(t_game *game);
void	map_rectangular(t_game *game);
void	value(t_game *game);
void	screen(t_game *game);
void	put_image(t_game *game);
void	next_img(t_game *game, char *img, int i, int j);
void	render_img(t_game *game);
void	move(t_game *game, int px, int py);
int		preskey(int keycode, t_game *game);
void	new_img(t_game *game, char *img);
void	destroy(t_game *game);
int		closed_x(t_game *game);
char	*ft_freejoin(char *buffer, char *buf);
void	freemap(t_game *game);
void	read_map(t_game *game, char *argv, int fd);

#endif
