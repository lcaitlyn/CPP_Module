NAME	= base
CC		= c++
SRCS	= main.cpp
CFLAGS	= -Wall -Werror -Wextra -std=c++98

OBJS	= ${SRCS:%.cpp=%.o}

%.o: %.cpp
		$(CC) $(CFLAGS) -c $< -o $@

${NAME}: ${OBJS} ${HEADER}
		${CC} ${CFLAGS} ${OBJS} -o $@

all:	${NAME}

.PHONY:	all clean fclean re

clean:
		rm -rf ${OBJS}

fclean:		clean
		rm -rf ${NAME}

re:		fclean all
