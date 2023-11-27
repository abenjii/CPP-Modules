# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/16 13:37:38 by alexfern          #+#    #+#              #
#    Updated: 2023/11/27 19:46:34 by alexfern         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
CXX = c++
RM = rm -rf

SRC = main.cpp \
		Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		WrongCat.cpp \
		WrongAnimal.cpp \
	  

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