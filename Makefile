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
DIR	= /Libft

all: ${NAME}
	@make -C ${DIR}
	@$(CC) ${SRC} -l.
