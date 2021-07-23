# SRCS	= $(wildcard ./srcs/ft_*.c)

#to compile the library
#gcc -Wall -Wextra - Werror -c ft* && ar rc libft.a *.o

#to compile the file with the library and includes
#gcc -Wall -Wextra -Werror main.c -L ../ -lft -I ../includes/

#to use the libft.a in compilation with your main
# ????

SOURCES	= ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c

OBJECTS	= ${SOURCES:.c=.o}

INCLUDE	= ../includes

NAME	= main

CC		= gcc
AR		= ar
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror
ARFLAGS	= rc

INDEX	= ranlib ${NAME}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCLUDE}

all:		${OBJECTS}
			${AR} ${ARFLAGS} ${NAME} ${OBJECTS}

clean:
			${RM} ${OBJECTS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
