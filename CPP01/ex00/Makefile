# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/27 11:34:07 by alex              #+#    #+#              #
#    Updated: 2023/11/14 17:07:04 by alexfern         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00
CXX = c++ -fsanitize=address
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

SRC = 	main.cpp \
		Zombie.cpp \
		newZombie.cpp \
		randomChump.cpp \

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(OBJ) $(NAME)

fclean: clean
	$(RM) $(OBJ) $(NAME)

re: fclean all

.SILENT: