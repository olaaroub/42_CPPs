CXX = c++

CXX_FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Account

SRC = Account.cpp  tests.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CXX) $(CXX_FLAGS) $(SRC) -o $(NAME)

clean:

fclean:
	rm -f $(NAME)

re: fclean all
.PHONY: all clean fclean re
