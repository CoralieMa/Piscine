# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmartino <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/27 09:55:39 by cmartino          #+#    #+#              #
#    Updated: 2022/07/27 09:55:40 by cmartino         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS		= srcs/ft_atoi.c \
			srcs/ft_calc.c \
			srcs/ft_op_ok.c \
			srcs/ft_op.c \
			srcs/ft_putnbr.c \
			srcs/ft_strlen.c

MAINSRCS	= main.c

OBJS		= ${SRCS:.c=.o}

MAIN		= ${MAINSRCS:.c=.o}

HEADERS		= includes/

NAME		= do-op

CC		= gcc

CFLAGS		= -Wall -Werror -Wextra

RM		= rm -f

.c.o:
		${CC} ${CFLAGS} -I ${HEADERS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS} ${MAIN}
			 ${CC} ${CFLAGS} -o ${NAME} -I ${HEADERS} ${MAIN} ${OBJS}

all :		${NAME}

clean:
		${RM} ${OBJS} ${MAIN}

fclean:		clean
			${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re