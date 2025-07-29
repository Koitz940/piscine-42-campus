# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/24 18:03:21 by gcassi-d          #+#    #+#              #
#    Updated: 2025/07/24 21:35:38 by gcassi-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
SRCS=srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS=${SRCS:.c=.o}
HEADERS_FOLDER=./includes
CC=cc
CFLAGS=-Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -I${HEADERS_FOLDER} -c $< -o ${<:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
