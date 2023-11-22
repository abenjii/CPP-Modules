# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alex <alex@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/14 17:18:02 by alexfern          #+#    #+#              #
#    Updated: 2023/11/15 20:41:32 by alex             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = c++
RM = rm -rf

SRC = main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \
	  

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