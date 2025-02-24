# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/04 19:16:00 by olaaroub          #+#    #+#              #
#    Updated: 2025/02/22 20:37:10 by olaaroub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

CXX_FLAGS = -Wall -Wextra -Werror -std=c++98
CXX_FLAGS += -fsanitize=address -g3

NAME = phonebook

SRC = phonebook.cpp contacts.cpp main.cpp tools.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CXX) $(CXX_FLAGS) $(SRC) -o $(NAME)

clean:

fclean:
	rm -f $(NAME)

re: fclean all
.PHONY: all clean fclean re
