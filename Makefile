# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: justo <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/03 18:45:18 by justo             #+#    #+#              #
#    Updated: 2023/12/03 18:45:18 by justo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables

NAME	=	libftprintf.a
CC		=	gcc
CFLAGS		=	-Wall -Wextra -Werror -I
RM			=	rm -f
AR			=	ar rcs

#Colors

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

#Link

INCLUDES	=	include
SRC_DIR		=	src/
OBJ_DIR		=	obj/
