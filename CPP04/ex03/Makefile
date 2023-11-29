# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alex <alex@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/27 17:50:29 by alexfern          #+#    #+#              #
#    Updated: 2023/11/28 09:42:20 by alex             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex03
CXX = c++
CXXFLAGS = -Werror -Wall -Wextra -std=c++98 -fsanitize=address
RM = rm -rf

SRC = main.cpp \
	AMateria.cpp \
	Ice.cpp \
	Cure.cpp \
	Character.cpp \
	ICharacter.cpp \

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