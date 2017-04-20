# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/17 18:03:05 by jkwon             #+#    #+#              #
#    Updated: 2017/04/17 18:03:07 by jkwon            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

FUNCTION = putchar \
					 putstr \
					 atoi \
					 putnbr \
					 operation

ADD_FT = $(addprefix ft_, $(FUNCTION))
SRC = $(addsuffix .c, $(ADD_FT)) main.c
OBJS = ${SRC:.c=.o}

CC = gcc
CFLAGS = -Wall -Wextra -Werror
MAKEFLAGS += --silent

all: $(NAME)

$(NAME) :	$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	/bin/rm -f $(OBJS)

fclean:
	/bin/rm -f $(NAME)

re: fclean all
