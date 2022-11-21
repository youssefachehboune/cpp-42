NAME = a.out

INC = Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp

SRCS = Bureaucrat.cpp Form.cpp main.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp

OBJS = $(SRCS:.cpp=.o)

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all:$(NAME)

$(NAME) : $(OBJS)
	c++ $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp $(INC)
	c++ $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -f *_shrubbery

re : fclean all

.PHONY: all clean fclean re