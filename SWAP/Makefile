# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/28 17:56:04 by jeulliot          #+#    #+#              #
#    Updated: 2022/03/29 19:14:14 by jeulliot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= push_swap.c ft_atoi.c ft_functions1.c ft_putnbr_fd.c utils.c \
			ft_functions2.c ft_functions3.c ft_sort.c \
			algorithm1.c algorithm2.c

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
