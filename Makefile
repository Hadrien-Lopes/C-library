NAME = libft.a
SRCS = 	ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c
CC = gcc -Wall -Wextra -Werror
CFLAGS = -I .libft.h
OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)
clean:
		rm -f $(OBJ)
fclean: clean
		rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
