# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/20 17:11:06 by gghaya            #+#    #+#              #
#    Updated: 2023/10/20 17:11:06 by gghaya           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =  zombieHorde.cpp  Zombie.cpp main.cpp

OBJ = $(SRC:.cpp=.o)


CC = c++

FLAG = -Wall -Wextra -Werror -std=c++98

NAME = Zombie

all : $(NAME)

$(NAME) : $(OBJ) Zombie.hpp
	$(CC) $(FLAG) $(OBJ) -o $(NAME)
	@echo "done"
clean :
	@rm -rf $(OBJ)
	@echo "clean"

fclean : clean
	@rm -rf $(NAME)

re : fclean all