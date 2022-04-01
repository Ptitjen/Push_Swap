# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/28 17:56:04 by jeulliot          #+#    #+#              #
#    Updated: 2022/04/01 16:00:45 by jeulliot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/push_swap.c srcs/ft_atoi.c srcs/ft_functions1.c srcs/ft_putnbr_fd.c srcs/utils.c \
			srcs/ft_functions2.c srcs/ft_functions3.c srcs/ft_sort.c \
			srcs/algorithm.c \
			srcs/ft_sort_int_tab.c

NAME	= push_swap

CC	= gcc

RM	= rm -f

all:	$(NAME)		

$(NAME):	${SRCS}
			@gcc -Wall -Wextra -Werror ${SRCS} -o ${NAME}
			
clean:

fclean:	clean
	${RM} ${NAME}

re:	fclean all
