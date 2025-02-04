NAME		= libftprintf.a

CC			= cc

RM			= rm -f

AR			= ar rcs

CFLAGS		= -Werror -Wall -Wextra

ARQC		= ft_printf.c \
			  ft_putchar.c \
			  ft_putstr.c \
			  ft_hexanbr.c \
			  ft_putnbr.c \

ARQH		= ft_printf.h

ARQO		= $(ARQC:.c=.o)

.c.o:		 $(CC) $(CFLAGS) -I $(ARQH) -c $< -o $(<:.c=.o)

$(NAME):	$(ARQO)
			$(AR) $(NAME) $(ARQO)

all:		$(NAME)

clean:
			$(RM) $(ARQO)

fclean:
			$(RM) $(ARQO) $(NAME)

re:			fclean all 

.PHONY:		all clean fclean re
