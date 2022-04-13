# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/28 17:56:04 by jeulliot          #+#    #+#              #
#    Updated: 2022/04/13 10:02:18 by jeulliot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/push_swap.c \
			srcs/algorithm_small.c \
			srcs/algorithm_large.c \
			srcs/algorithm_very_large.c \
			srcs/ft_atoi.c \
			srcs/ft_functions1.c srcs/ft_functions2.c srcs/ft_functions3.c \
			srcs/utils1.c srcs/utils2.c srcs/utils3.c srcs/utils4.c \
			srcs/utils5.c \
			srcs/errors.c

SRCSBONUS	= bonus/ft_atoi.c \
			bonus/ft_strcmp.c \
			bonus/ft_functions1.c bonus/ft_functions2.c bonus/ft_functions3.c \
			bonus/utils_bonus.c \
			bonus/errors.c \
			bonus/checker.c \
			bonus/ft_split.c \
			bonus/ft_strjoin.c \
			bonus/get_next_line.c bonus/get_next_line_utils.c

NAME	= push_swap

BONUS	= checker

RM	= @rm -f

all:	$(NAME)		

$(NAME):	${SRCS}
			@gcc -Wall -Wextra -Werror ${SRCS} -o ${NAME}
			
bonus:	$(BONUS)

$(BONUS) :	${SRCSBONUS}
			@gcc -Wall -Wextra -Werror ${SRCSBONUS} -o ${BONUS}

clean:

fclean:	clean
	${RM} ${NAME}
	${RM} ${BONUS}

re:	fclean all
