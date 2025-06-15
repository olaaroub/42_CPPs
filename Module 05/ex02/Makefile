CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
# CXXFLAGS += -fsanitize=address -g3

NAME = prog00

SRC = main.cpp Bureaucrat.cpp Form.cpp


OPATH = dependencies
OBJ = $(SRC:.cpp=.o)
OBJS = $(addprefix $(OPATH)/,$(OBJ))
DEPS = $(OBJS:.o=.d)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

$(OPATH)/%.o: %.cpp | $(OPATH)
	$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@

$(OPATH):
	mkdir -p $(OPATH)

-include $(DEPS)

clean:
	rm -f $(OBJS) $(DEPS)

fclean: clean
	rm -f $(NAME)
	rm -rf $(OPATH)

re: fclean all

.PHONY: all clean fclean re
