NAME	:=	program

CC		:=	c++
FLAGS	:=	-Wall -Wextra -Werror #-fsanitize=address
CFLAGS	:=	-std=c++98

SRCS	:=	main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp \
			RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp
INCS	:=	Bureaucrat.hpp AForm.hpp PresidentialPardonForm.hpp \
			RobotomyRequestForm.hpp ShrubberyCreationForm.hpp Intern.hpp

OBJS	:=	$(SRCS:.cpp=.o)

%.o:%.c
	$(CC) -I $(INCS) -c $< -o $@

all:		$(NAME)

$(NAME): $(INCS) $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) $(FLAGS) -o $@

clean:
	rm -rf $(OBJS)

fclean:		clean
	rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
