# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hes-safi <hes-safi@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/23 15:57:02 by hes-safi          #+#    #+#              #
#    Updated: 2025/03/21 06:57:05 by hes-safi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= 	FinalFantasy

SRC			= 	main.cpp AMateria.cpp Character.cpp Ice.cpp Cure.cpp MateriaSource.cpp Floor.cpp

OBJ			= 	${SRC:.cpp=.o}

CXXFLAGS	= 	-Wall -Wextra -Werror -std=c++98

CXX			= 	c++

all : ${NAME}

${NAME} : ${OBJ}
	${CXX} ${CXXFLAGS} ${OBJ} -o ${NAME}

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all

.PHONY : re all clean fclean

.SECONDARY: ${OBJ}   