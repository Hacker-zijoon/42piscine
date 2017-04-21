# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/17 10:52:29 by jkwon             #+#    #+#              #
#    Updated: 2017/04/18 21:37:07 by jkwon            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

FUNCTION = putchar putstr

ADD_FT = $(addprefix ft_, $(FUNCTION))
SRC = $(addsuffix .c, $(ADD_FT)) main.c
OBJ = $(addsuffix .o, $(ADD_FT)) main.o

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(H_DIR)
H_DIR = includes

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ)  -o $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean:
	/bin/rm -f $(NAME)

re: fclean all
