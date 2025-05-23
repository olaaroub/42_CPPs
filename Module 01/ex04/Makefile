

CXX = c++

CXX_FLAGS = -Wall -Wextra -Werror -std=c++98
CXX_FLAGS += -fsanitize=address -g3

NAME = phonebook

SRC = main.cpp  utils.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXX_FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME) $(OBJ)

re: fclean all
.PHONY: all clean fclean re
.SECONDARY: $(OBJ)
