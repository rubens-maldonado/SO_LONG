# NAME PROGRAM #
#
NAME	= so_long

# MLX #
MLX_D	= ./mlx
# PRINTF #
PRINT	= ./printf/libftprintf.a
PRINT_D	= ./printf
# LIBFT #
LIB		= ./libft/libft.a
LIB_D	= ./libft

# SOURCE.C #
SRC		= validation.c validation_s.c values.c so_long.c screen.c move.c 
# COMPILING VARIABLES #
CC		= cc
CFLAG	= -Wall -Wextra -Werror
RM		= rm -f
CFLONG	= -Lmlx -lmlx -framework OpenGL -framework Appkit

$(NAME) : $(SRC)
	Make -C ./libft
	Make -C ./printf
	$(CC) $(CFLAG) $(SRC) $(LIB) $(PRINT) $(CFLONG) -o so_long

$(LIBFT):
	Make -C ./libft

$(PRINTF):
	Make -C ./printf

all:	$(NAME)

clean:
	$(MAKE) fclean -C $(PRINT_D)
	$(MAKE) fclean -C $(LIB_D)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all fclean clean re
