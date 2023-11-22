# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/26 14:52:18 by alex              #+#    #+#              #
#    Updated: 2023/11/14 15:50:23 by alexfern         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
Rm = rm -rf

SRC = 	tests.cpp \
		Account.cpp \

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