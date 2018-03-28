NAME = libft.a
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
srcs/ft_strlen.c srcs/ft_swap.c
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
INC = -I includes

all: $(NAME)

$(NAME):
	@gcc -c $(SRC) $(INC)
	@ar rc $(NAME) $(OBJ)

clean:
	@rm -f *.o

fclean: clean
	@rm $(NAME)

re: fclean all
