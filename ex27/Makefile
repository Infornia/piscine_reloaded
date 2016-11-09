# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwilk <mwilk@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/09 16:17:56 by mwilk             #+#    #+#              #
#    Updated: 2016/11/09 18:45:33 by mwilk            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


## PROJECT

NAME = ft_display_file

## COMPILATEUR

OS = $(shell uname -s)
CC = clang
CFLAGS = -Wall -Wextra -Werror

## FILES

SRC = $(shell ls -1 srcs)
OBJ = $(patsubst %.c, %.o, $(SRC))

INC =  -I ./
INC += -I ./includes/


LIB =  -L libft -lft

## RULES

all: $(NAME)

$(NAME) :	$(OBJ)
			@$(CC) $(CFLAGS) -o $@ $(OBJ)

%.o:	srcs/%.c
			@$(CC) $(FLAGS) $(INC) -o $@ -c $<

clean:
			@rm -f $(OBJ)

fclean: clean
			@rm -rf $(NAME)


re: fclean all

.PHONY: all clean fclean re

