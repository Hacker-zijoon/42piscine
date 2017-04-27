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

NAME = bsq

FUNCTION = putchar putstr atoi print find_square readmap valid_char\


ADD_FT = $(addprefix ft_, $(FUNCTION))
SRC = $(addsuffix .c, $(ADD_FT)) main.c
OBJ = $(addsuffix .o, $(ADD_FT)) main.o
SRC_PATH = $(addprefix ./srcs/, $(SRC))
OBJ_PATH = $(addprefix ./srcs/, $(OBJ))

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(H_DIR)
H_DIR = includes

all: $(NAME)

$(NAME) : $(OBJ_PATH)
	$(CC) $(CFLAGS) $(OBJ_PATH)  -o $(NAME)

clean:
	/bin/rm -f $(OBJ_PATH)

fclean:
	/bin/rm -f $(NAME)

re: fclean all
