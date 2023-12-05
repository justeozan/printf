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


# INCLUDES	=	include
SRCS		=	src/ft_printf.c \
				src/ft_prints.c \

OBJS		=	$(SCRS:.c=.o)

CC		=	gcc

CFLAGS		=	-Wall -Wextra -Werror

RM			=	rm -f

AR			=	ar rc

all:		$(NAME)

$(NAME)	:	$(OBJS)
			@$(AR) $(NAME) $(OBJS)

#Commands

clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all
