# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlopes <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/23 07:38:46 by jlopes            #+#    #+#              #
#    Updated: 2017/04/23 23:27:04 by jlopes           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2
FLAGS = -Wall -Wextra -Werror
SRC = rush.c rush_dimension.c if_its_rush.c main.c \
	  other_funct.c read_stdin.c str_funct.c
OBJ = rush.o rush_dimension.o if_its_rush.o main.o \
	  other_funct.o read_stdin.o str_funct.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC)
	gcc $(FLAGS) $(OBJ) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
