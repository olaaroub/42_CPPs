# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/04 19:16:00 by olaaroub          #+#    #+#              #
#    Updated: 2025/05/23 22:11:27 by olaaroub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

CXX_FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = phonebook

SRC = phonebook.cpp contacts.cpp main.cpp tools.cpp
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
