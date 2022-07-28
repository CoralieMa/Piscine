SRCS		 = main.c ft_check_str.c ft_convert.c ft_init_tab.c ft_len_size.c ft_split.c ft_putnbr.c

OBJS		 = ${SRCS:.c=.o}

INCLUDE 	 = -I./libr2.h

NAME	 	 = rush-02

CC		  	 = gcc

CFLAGS		 = -Wall -Werror -Wextra

RM			 = rm -f

.c.o:
			 ${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	 ${OBJS}
			 ${CC} ${CFLAGS} -o ${NAME} ${OBJS}
		
all:		 ${NAME}

clean:
			 ${RM} ${OBJS}

fclean:		 clean
			 ${RM} ${NAME}

re:			 fclean all

.PHONY:		 all clean fclean re
