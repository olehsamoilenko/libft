# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: osamoile <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/20 15:13:09 by osamoile          #+#    #+#              #
#    Updated: 2018/03/20 15:16:39 by osamoile         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = ft_display_file.c
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -o $(NAME) $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
