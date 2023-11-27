# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/27 17:50:29 by alexfern          #+#    #+#              #
#    Updated: 2023/11/27 19:42:25 by alexfern         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex03
CXX = c++
CXXFLAGS = -Werror -Wall -Wextra -std=c++98 -fsanitize=address
RM = rm -rf

SRC = main.cpp \

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