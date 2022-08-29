NAME	=	PhoneBook

SRC		=	main.cpp Contact.cpp PhoneBook.cpp

OBJ		=	$(SRC:.cpp=.o)

FLAGS	=	-Wall -Wextra -Werror -std=c++98

all: $(NAME)

%.o		:	%.cpp
	c++ $(FLAGS) -c $< -o $@

$(NAME)	:	$(OBJ) PhoneBook.hpp Contact.hpp
	c++ $(FLAGS) $(OBJ) -o $@
	echo "Доделай это говно, чтобы сортировало норм когда size == 8"

clean	:
	$(RM) $(OBJ)

fclean	:	clean
	$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re