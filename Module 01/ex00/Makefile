CXX = c++

CXX_FLAGS = -std=c++98 -Wall -Wextra -Werror
CXX_FLAGS += -fsanitize=address -g3

NAME = Zombie

SRC = newZombie.cpp randomChump.cpp Zombie.cpp main.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CXX) $(CXX_FLAGS) $(SRC) -o $(NAME)

clean:

fclean:
	rm -f $(NAME)

re: fclean all
.PHONY: all clean fclean re
