# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/24 22:09:44 by gcassi-d          #+#    #+#              #
#    Updated: 2025/07/29 22:02:22 by gcassi-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail
SRCS=main.c
CC=cc
FLAGS=-Wall -Wextra -Werror
OBJS=${SRCS:.c=.o}

.c.o:
	$(CC) $(FLAGS) -c $< -o ${<:.c=.o}

all: $(NAME)

$(NAME): ${OBJS}
	${CC} ${FLAGS} ${OBJS} -o ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

.PHONY: clean fclean all