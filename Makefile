NAME		=	libftprintf.a

CC			=	cc

CFLAGS		=	-Wall -Wextra -Werror

SRC 		=	ft_hexi.c \
				ft_printf.c \
				ft_put.c \
				ft_putadd.c \
				ft_puthexi.c \
				ft_utoa.c \

OBJ 		= $(SRC:.c=.o)

LIBFTDIR	= libft/

LIBFTA		= libft.a

all:		$(NAME)

$(NAME):	$(OBJ) $(LIBFTA)
	ar -crs $(NAME) $(OBJ)

$(LIBFTA):
	cd ./$(LIBFTDIR) && make all
	cp $(LIBFTDIR)$(LIBFTA) .
	mv $(LIBFTA) $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	cd $(LIBFTDIR) && make clean
	rm -f $(OBJ)

fclean: clean
	cd $(LIBFTDIR) && make fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
