# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ozasahin <ozasahin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/03 18:45:18 by justo             #+#    #+#              #
#    Updated: 2023/12/06 17:33:09 by ozasahin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables

NAME	=	libftprintf.a

# INCLUDES	=	include
SRCS		=	src/ft_printf.c src/ft_prints.c \		

OBJS		=	$(SRCS:.c=.o)

CC		=	gcc

CFLAGS		=	-Wall -Wextra -Werror

RM			=	rm -f

AR			=	ar rc

%.o:	%.c ft_printf.h
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME)	:	$(OBJS)
			$(AR) $(NAME) $(OBJS)

all:		$(NAME)

#Commands

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
