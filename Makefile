# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zombunga <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/12 22:55:05 by zombunga          #+#    #+#              #
#    Updated: 2024/09/12 23:06:06 by zombunga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= pipex
CC	= cc
CFLAGS	= -Wall -Werror -Wextra
SRC	= pipex.c
OBJS	= pipex.o
DIR	= ./libft

all: ${NAME}

${NAME}:${OBJS}
	@make re -C ${DIR}
	@${CC} ${CFLAGS} ${SRC} ./libft/libft.a -o ${NAME}
	@printf "\033c"
	@echo "\033[32mBinary\033[33m pipex\033[32m succesfully created\033[0m"

${OBJS} : ${SRC}
	@${CC} ${CFLAGS} -c ${SRC}

clean:
	@make clean -C ${DIR}
	@rm -rf ${OBJS}
	@printf "\033c"
	@echo "\033[32mSuccesfully cleaned!\033[0m"

fclean: clean
	@make fclean -C ${DIR}
	@rm -rf ${NAME}
	@printf "\033c"
	@echo "\033[32mBinary and objects\033[33m pipex\033[32m succesfully \033[31mdeleted\033[0m"

re: fclean all
