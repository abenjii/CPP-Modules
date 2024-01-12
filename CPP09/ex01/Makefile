NAME = RPN
CXXFLAGS = -Werror -Wextra -Wall -std=c++98 -fsanitize=address
CXX = c++
RM = rm -rf

SRC = main.cpp \
		RPN.cpp \

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

clean :
	$(RM) $(OBJ) $(NAME)

fclean : clean
	$(RM) $(OBJ) $(NAME)

re : fclean all

.SILENT: