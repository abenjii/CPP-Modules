# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/31 11:24:48 by alex              #+#    #+#              #
#    Updated: 2023/11/14 17:09:47 by alexfern         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = HarlFilter
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

SRC = main.cpp \
	  Harl.cpp \

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(OBJ) $(NAME)

fclean: clean
	$(RM) $(OBJ) $(NAME)

re: fclean all

.SILENT: