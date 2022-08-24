# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drayl <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/17 21:34:03 by drayl             #+#    #+#              #
#    Updated: 2022/03/17 21:34:04 by drayl            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex01

CC		=	c++

FLAGS	=	-Wall -Wextra -Werror

HEAD	=	iter.hpp

SRCS	=	main.cpp

OBJS	=	${SRCS:.cpp=.o}

all		:	${NAME}

${NAME}	:	${OBJS}
			${CC} ${FLAGS} -o ${NAME} ${OBJS}

%.o		:	%.cpp ${HEAD}
			${CC} ${FLAGS} -c $< -o $@

clean	:
			rm -f ${OBJS}

fclean	:	clean
			rm -f ${NAME}

re		:	fclean all
