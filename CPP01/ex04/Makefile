# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/10 13:12:35 by alex              #+#    #+#              #
#    Updated: 2023/11/14 17:08:58 by alexfern         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex04
CXX = c++
CXXFLAGS = -Werror -Wextra -Wall -std=c++98
RM = rm -rf

SRC =	main.cpp \

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