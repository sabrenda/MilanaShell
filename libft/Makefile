NAME = a.out

HEADER = src/libft.h

SRC =	src/ft_isalnum.c	src/ft_tolower.c	\
		src/ft_isalpha.c	src/ft_isascii.c	src/ft_isdigit.c	\
		src/ft_isprint.c	src/ft_strlen.c	src/ft_toupper.c	\
		src/ft_calloc.c		ft_strdup

OBJ = $(SRC:.c=.o)

all:$(NAME)

$(NAME): $(HEADER) $(OBJ)
	gcc $(SRC) src/main.c -o a.out

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re