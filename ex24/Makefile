# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwilk <mwilk@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/09 16:17:56 by mwilk             #+#    #+#              #
#    Updated: 2016/11/09 16:57:10 by mwilk            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


## PROJECT

NAME = libft.a

## COMPILATEUR

OS = $(shell uname -s)
CC = clang
FLAGS = -Wall -Wextra -Werror

## FILES

SRC = $(shell ls -1 srcs)
OBJ = $(patsubst %.c, %.o, $(SRC))

INC =  -I ./
INC += -I ./includes/


LIB =  -L libft -lft

## RULES

all: $(NAME)

$(NAME) :	$(OBJ)
			@ar rc $(NAME) $(OBJ)
			@ranlib $(NAME)

%.o:	srcs/%.c
			@$(CC) $(FLAGS) $(INC) -o $@ -c $<

clean:
			@rm -f $(OBJ)

fclean: clean
			@rm -rf $(NAME)


re: fclean all

.PHONY: all clean fclean re

