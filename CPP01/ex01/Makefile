# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/03 12:32:48 by alex              #+#    #+#              #
#    Updated: 2023/11/14 17:07:28 by alexfern         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01
CXX = c++ -fsanitize=address
CXXFLAGS = -Werror -Wextra -Wall -std=c++98
RM = rm -rf

SRC =	main.cpp \
		Zombie.cpp \
		zombieHorde.cpp \

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(OBJ) $(NAME)
	
fclean : clean
	$(RM) $(OBJ) $(NAME)

re: fclean all

.SILENT: