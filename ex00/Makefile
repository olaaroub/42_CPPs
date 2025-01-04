# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/04 17:03:27 by olaaroub          #+#    #+#              #
#    Updated: 2025/01/04 17:05:26 by olaaroub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = megaphone

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPP_FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
.PHONY: all clean fclean re
.SILENT: all clean fclean re $(NAME) $(OBJ)
.SECONDARY: $(OBJ)