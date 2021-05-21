NAME = libft.a
SRCS = 	ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memcmp.c \
		ft_memmove.c \
		ft_strlen.c \
		ft_strdup.c \
		ft_strcpy.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_memalloc.c \
		ft_memdel.c \
		ft_strnew.c \
		ft_strdel.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putendl.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c
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
