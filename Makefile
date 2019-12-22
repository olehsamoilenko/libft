# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: osamoile <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/26 11:59:56 by osamoile          #+#    #+#              #
#    Updated: 2018/03/26 12:08:46 by osamoile         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libft.a
HEADERS =	-I ./includes
FLAGS =		-Wall -Werror -Wextra -fvisibility=hidden -fPIC
LIST =		ft_memset \
			ft_bzero \
			ft_memcpy \
			ft_memccpy \
			ft_memmove \
			ft_memchr \
			ft_memcmp \
			ft_strlen \
			ft_strdup \
			ft_strcpy \
			ft_strncpy \
			ft_strcat \
			ft_strncat \
			ft_strlcat \
			ft_strchr \
			ft_strrchr \
			ft_strstr\
			ft_strnstr \
			ft_strcmp \
			ft_strncmp \
			ft_atoi \
			ft_atoi_base \
			ft_isalpha \
			ft_isdigit \
			ft_isalnum \
			ft_isascii \
			ft_isprint \
			ft_toupper \
			ft_tolower \
			ft_memalloc \
			ft_memdel \
			ft_strnew \
			ft_strdel \
			ft_strclr \
			ft_striter \
			ft_striteri \
			ft_strmap \
			ft_strmapi \
			ft_strequ \
			ft_strnequ \
			ft_strsub \
			ft_strjoin \
			ft_strtrim \
			ft_strsplit \
			ft_itoa \
			ft_itoa_base \
			ft_putchar \
			ft_putstr \
			ft_putendl \
			ft_putnbr \
			ft_putchar_fd \
			ft_putstr_fd \
			ft_putendl_fd \
			ft_putnbr_fd \
			ft_lstnew \
			ft_lstdelone \
			ft_lstdel \
			ft_lstadd \
			ft_lstiter \
			ft_lstmap \
			ft_iswhitespace \
			ft_countdigits \
			ft_wordscount \
			ft_arrclr \
			ft_lstaddend \
			get_next_line \
			ft_printf \
			parsing \
			recognise \
			type_c \
			type_hex \
			type_integer \
			type_o \
			type_s \
			type_unsigned \
			ft_chartable \
			ft_abs \
			ft_arrlen \
			ft_char_count
OBJ =		$(addprefix obj/, $(addsuffix .o, $(LIST)))

OFF=\033[0;0m
RED=\033[0;31m
REDBOLD=\033[1;31m
GREEN=\033[0;32m
GREENBOLD=\033[1;32m
YELLOW=\033[0;33m
YELLOWBOLD=\033[1;33m
PURPLE=\033[0;35m
PURPLEBOLD=\033[1;35m

all: $(NAME)

obj/%.o: src/%.c
	@gcc $(FLAGS) -c $< -o $@ $(HEADERS)
	@echo "$(GREEN)Compiling$(GREENBOLD) $< $(GREEN)done.$(OFF)"

$(NAME): obj $(OBJ)
	@ar -rc $(NAME) $(OBJ)
	@echo "$(PURPLEBOLD)$(NAME) $(PURPLE)is ready.$(OFF)"

obj:
	@mkdir obj
	
clean:
	@rm -rf obj
	@echo "$(RED)Directory$(REDBOLD) libft/obj $(RED)has been destroyed.$(OFF)"

clean_bin:
	@rm -f $(NAME)
	@echo "$(RED)Library$(REDBOLD) $(NAME) $(RED)has been destroyed.$(OFF)"

fclean: clean clean_bin

re: fclean all
