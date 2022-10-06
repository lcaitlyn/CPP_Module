NAME	=	FormExecutor

SRC		=	main.cpp Bureaucrat.cpp Form.cpp\
			PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

OBJ		=	$(SRC:.cpp=.o)

FLAGS	=	-Wall -Wextra -Werror -std=c++98

all: $(NAME)

%.o		:	%.cpp
	c++ $(FLAGS) -c $< -o $@

$(NAME)	:	$(OBJ) Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp 
	c++ $(FLAGS) $(OBJ) -o $@

clean	:
	$(RM) $(OBJ)

fclean	:	clean
	$(RM) $(NAME) *_shrubbery

re		:	fclean all

.PHONY	:	all clean fclean re
