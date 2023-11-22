# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 16:31:42 by alexfern          #+#    #+#              #
#    Updated: 2023/11/14 17:11:23 by alexfern         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex03
CXXFLAGS = -Wall -Wextra -std=c++98 -ggdb
CXX = c++
RM = rm -rf

SRC = main.cpp \
	  Fixed.cpp \
	  Point.cpp \
	  bsp.cpp \

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
