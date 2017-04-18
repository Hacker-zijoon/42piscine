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

CC = gcc
CFLAGS = -Wall -Wextra -Werror
OBJS = ${SRC:.c=.o}
MAKEFLAGS += --silent

all: $(NAME)

$(NAME) :	$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	/bin/rm -f ft_putchar.o ft_putstr.o \
			ft_atoi.o ft_putnbr.o main.o

fclean:
	/bin/rm -f $(NAME)

re: fclean all
