# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/17 10:52:29 by jkwon             #+#    #+#              #
#    Updated: 2017/04/17 14:17:18 by jkwon            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/ft_putchar.c \
			srcs/ft_putstr.c \
			srcs/ft_strcmp.c \
			srcs/ft_strcat.c \
			srcs/ft_strcpy.c \
			srcs/ft_strncat.c \
			srcs/ft_strncpy.c \
			srcs/ft_swap.c \
			srcs/ft_strlen.c

CC = gcc
CFLAGS = -c -Wall -Wextra -Werror -I$(H_DIR)
H_DIR = includes

all: $(NAME)

$(NAME) :
	$(CC) $(CFLAGS) $(SRC)
	ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o \
				ft_strcat.o ft_strcpy.o ft_strncat.o \
				ft_strncpy.o ft_swap.o ft_strlen.o
	ranlib $(NAME)

clean:
	/bin/rm -f ft_putchar.o ft_putstr.o ft_strcmp.o \
				ft_strcat.o ft_strcpy.o ft_strncat.o \
				ft_strncpy.o ft_swap.o ft_strlen.o

fclean:
	/bin/rm -f $(NAME)

re: fclean all
