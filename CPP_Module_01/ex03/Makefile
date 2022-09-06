NAME	=	UnnecessaryViolence

SRC		=	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJ		=	$(SRC:.cpp=.o)

FLAGS	=	-Wall -Wextra -Werror -std=c++98

all: $(NAME)

%.o		:	%.cpp
	c++ $(FLAGS) -c $< -o $@

$(NAME)	:	$(OBJ) Weapon.hpp HumanA.hpp HumanB.hpp
	c++ $(FLAGS) $(OBJ) -o $@

clean	:
	$(RM) $(OBJ)

fclean	:	clean
	$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
