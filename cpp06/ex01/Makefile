# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 23:38:53 by gghaya            #+#    #+#              #
#    Updated: 2024/02/06 12:59:06 by gghaya           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC =   Serializer.cpp main.cpp

OBJ = $(SRC:.cpp=.o)


CC = c++

FLAG = -Wall -Wextra -Werror -std=c++98

NAME = Serializer

all : $(NAME)

$(NAME) : $(OBJ)   Serializer.hpp
	$(CC) $(FLAG) $(OBJ) -o $(NAME)
	@echo "done"
clean :
	@rm -rf $(OBJ)
	@echo "clean"

fclean : clean
	@rm -rf $(NAME)

re : fclean all
