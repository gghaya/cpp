# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 23:38:53 by gghaya            #+#    #+#              #
#    Updated: 2024/02/08 14:49:09 by gghaya           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC =    main.cpp 

OBJ = $(SRC:.cpp=.o)


CC = c++

FLAG = -Wall -Wextra -Werror -std=c++98

NAME = Array

all : $(NAME)

$(NAME) : $(OBJ)   Array.hpp
	$(CC) $(FLAG) $(OBJ) -o $(NAME)
	@echo "done"
clean :
	@rm -rf $(OBJ)
	@echo "clean"

fclean : clean
	@rm -rf $(NAME)

re : fclean all
