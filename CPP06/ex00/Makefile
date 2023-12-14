NAME = convert
CXX = c++
CXXFLAGS = -Werror -Wall -Wextra -std=c++98 -fsanitize=address
RM = rm -rf

SRC = main.cpp \
		ScalarConverter.cpp \

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

clean :
	$(RM) $(OBJ) $(NAME)

fclean : clean
	$(RM) $(OBJ) $(NAME)

re : fclean all

.SILENT: