NAME	:= program

CC		:=	c++
CPPFLAGS:=	-Wall -Wextra -Werror #-fsanitize=address
CPPFLAG	:=	-std=c++98

SRCS	:=	main.cpp
INCS	:=	iter.hpp

OBJS	:=	$(SRCS:.cpp=.o)

%.o:%.cpp
	$(CC) -I $(INCS) $(CPPFLAGS) $(CPPFLAG) -c $< -o $@

all:		$(NAME)

$(NAME): $(INCS) $(OBJS)
	$(CC) $(OBJS) $(CPPFLAGS) $(CPPFLAG) -o $@

clean:
	rm -rf $(OBJS)

fclean:		clean
	rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
