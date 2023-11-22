# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 19:06:28 by alexfern          #+#    #+#              #
#    Updated: 2023/11/14 17:10:52 by alexfern         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02
CXXFLAGS = -Werror -Wextra -Wall -std=c++98
CXX = c++
RM = rm -rf

SRC = Fixed.cpp \
	  main.cpp \

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