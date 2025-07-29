# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/24 22:09:44 by gcassi-d          #+#    #+#              #
#    Updated: 2025/07/29 21:51:37 by gcassi-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=ft_cat
SRCS=main.c
CC=cc
FLAGS=-Wall -Wextra -Werror
OBJS=${SRCS:.c=.o}

.c.o:
	$(CC) $(FLAGS) -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${CC} ${FLAGS} ${OBJS} -o ${NAME}

all: $(NAME)

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

.PHONY: clean fclean all