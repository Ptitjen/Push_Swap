# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/28 17:56:04 by jeulliot          #+#    #+#              #
#    Updated: 2022/03/29 14:21:50 by jeulliot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= push_swap.c ft_atoi.c ft_functions1.c ft_putnbr_fd.c

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
