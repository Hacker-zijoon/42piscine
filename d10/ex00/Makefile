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

NAME = libft.a

FUNCTION = putchar \
		 putstr \
		 strcmp \
		 strcat \
		 strcpy \
		 strncat \
		 strncpy \
		 swap \
		 strlen \

ADD_FT = $(addprefix ft_, $(FUNCTION))
SRC = $(addsuffix .c, $(ADD_FT))
OBJ = $(addsuffix .o, $(ADD_FT))
SRC_PATH = $(addprefix ./srcs/, $(SRC))

CC = gcc
CFLAGS = -c -Wall -Wextra -Werror -I$(H_DIR)
H_DIR = includes

all: $(NAME)

$(NAME) :
	$(CC) $(CFLAGS) $(SRC_PATH)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean:
	/bin/rm -f $(NAME)

re: fclean all
