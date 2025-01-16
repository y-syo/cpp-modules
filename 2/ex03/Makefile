# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/22 07:21:18 by mmoussou          #+#    #+#              #
#    Updated: 2025/01/11 17:37:43 by mmoussou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL = bash

CC = c++

CFLAGS = -std=c++98 -Wall -Werror -Wextra

INCLUDE = ./include

NAME = ex03

#find -type f -name "*.cpp" | sed "s/\.\///g" | xargs -Iname echo "`printf '\t\t\t'`" name "\\"
SRCS = bsp.cpp Fixed.cpp main.cpp Point.cpp
#SRCS = $(shell find -name '*.cpp')

all: $(NAME)

$(NAME): $(OBJS)
	@printf "\x1B[1;33m[ 󱉟 ]\x1B[0m compiling $(NAME)..."
	@$(CC) $(CFLAGS) $(SRCS) -I$(INCLUDE) -o $(NAME)
	@printf "\x1B[2K\r\x1B[1;33m[ 󱉟 ]\x1B[0m $(NAME) compiled.\n"

clean:
	@printf "\x1B[1;31m[  ]\x1B[0m deleted objects.\n"

fclean: clean
	@rm -f $(NAME)
	@printf "\x1B[1;31m[  ]\x1B[0m deleted $(NAME).\n"

re: fclean all

.PHONY: all clean fclean re
