CXX = c++

CXX_FLAGS = -Wall -Wextra -Werror -std=c++98
CXX_FLAGS += #-fsanitize=address -g3

NAME = BSP

SRC = Fixed.cpp main.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CXX) $(CXX_FLAGS) $(SRC) -o $(NAME)

clean:

fclean:
	rm -f $(NAME)

re: fclean all
.PHONY: all clean fclean re
