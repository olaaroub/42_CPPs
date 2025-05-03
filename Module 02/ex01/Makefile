CXX = c++

CXX_FLAGS = -std=c++98 -Wall -Wextra -Werror
CXX_FLAGS += -fsanitize=address -g3

NAME = Fixed

SRC = main.cpp  Fixed.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CXX) $(CXX_FLAGS) $(SRC) -o $(NAME)

clean:

fclean:
	rm -f $(NAME)

re: fclean all
.PHONY: all clean fclean re
