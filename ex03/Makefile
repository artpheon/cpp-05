NAME	= ex03
SRC		= main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp \
			PresidentialPardonForm.cpp Intern.cpp
OBS		= $(SRC:.cpp=.o)
FLAGS	= -Wall -Wextra -Werror
INC		= -I.
HED		= Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp \
			PresidentialPardonForm.hpp Intern.hpp
CC		= clang++
%.o:	%.cpp
	$(CC) $(INC) $(FLAGS) -c $< -o $(<:.cpp=.o)

all: $(NAME)

$(NAME):	$(OBS) $(HED)
	$(CC) $(OBS) $(INC) $(FLAGS) -o $(NAME)

clean:
	rm -rf $(OBS)

fclean:	clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re