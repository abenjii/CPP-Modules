	NAME = ex02
CXX = c++
CXXFLAGS = -Werror -Wextra -Wall -std=c++98 -Wshadow -fsanitize=address
RM = rm -rf

SRC = main.cpp \

OBJ = $(SRC:.cpp=.o)

all : $(NAME)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

clean :
	$(RM) $(OBJ) $(NAME)

fclean : clean
	$(RM) $(OBJ) $(NAME)

re : fclean all

.SILENT: