# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/12 19:37:06 by aminoru-          #+#    #+#              #
#    Updated: 2022/05/12 20:59:17 by aminoru-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	test_gnl.a

CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra -g

SRC_DIR = ../
SRCS_FILES	=	get_next_line.c get_next_line_utils.c
SRC_ALL = ${addprefix ${SRC_DIR}, ${SRCS_FILES}}

SRCS_BONUS	= get_next_line_bonus.c get_next_line_utils_bonus.c
SRC_BONUS_ALL = ${addprefix ${SRC_DIR}, ${SRCS_BONUS}}

OBJS	=	${SRCS:.c=.o}
OBJS_BONUS	=	${SRCS_BONUS:.c=.o}

all: 		mandatory bonus 

mandatory: 	
				@clear
				@echo "--------------------"
				@echo "---Mandatory Part---"
				@echo "--------------------"
				${CC} ${CFLAGS} -I ${SRC_DIR} -D BUFFER_SIZE=42 ${SRC_ALL} main.c -o ${NAME} && ./${NAME}

bonus:
				@echo "--------------------"
				@echo "-----Bonus Part-----"
				@echo "--------------------"
				${CC} ${CFLAGS} -I ${SRC_DIR} -D BUFFER_SIZE=42 ${SRC_BONUS_ALL} main2.c -o ${NAME} && ./${NAME}

.c.o:
				${CC} ${CFLAGS} -I ${SRC_DIR} -c $< -o ${<:.c=.o}

clean:
				rm -f ${OBJS} ${OBJS_BONUS}

fclean: 	clean
				rm -f ${NAME}

re: 		fclean all

rebonus:	fclean bonus

.PHONY: all clean fclean re bonus rebonus