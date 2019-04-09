# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brfeltz <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 22:08:59 by brfeltz           #+#    #+#              #
#    Updated: 2018/11/08 20:55:26 by brfeltz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SRC = srcs/main.c srcs/ft_cat.c srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_puterror.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRC)

clean:
	rm -f main.o ft_cat.o ft_putchar.o ft_puterror.o ft_putstr.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
