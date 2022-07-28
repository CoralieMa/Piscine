# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmartino <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/25 16:37:30 by cmartino          #+#    #+#              #
#    Updated: 2022/07/25 16:37:34 by cmartino         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_putchar.c \
		srcs/ft_swap.c \
 		srcs/ft_putstr.c \
		srcs/ft_strlen.c \
		srcs/ft_strcmp.c

OBJS	= ${SRCS:.c=.o}

HEADER	= includes/

NAME	= libft.a

CC	= gcc

CFLAGS	= -Wall -Wextra -Werror

RM	= rm -f

.c.o:
	${CC} ${CFLAGS} -I ${HEADER} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		ar rcs ${NAME} ${OBJS}
all :	${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
