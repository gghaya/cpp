# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 23:38:53 by gghaya            #+#    #+#              #
#    Updated: 2023/11/04 18:57:20 by gghaya           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = Animal.cpp Dog.cpp Cat.cpp  WrongAnimal.cpp WrongCat.cpp main.cpp

OBJ = $(SRC:.cpp=.o)


CC = c++

FLAG = -Wall -Wextra -Werror -std=c++98

NAME = Animal

all : $(NAME)

$(NAME) : $(OBJ)   Animal.hpp Dog.hpp Cat.hpp  WrongAnimal.hpp WrongCat.cpp
	$(CC) $(FLAG) $(OBJ) -o $(NAME)
	@echo "done"
clean :
	@rm -rf $(OBJ)
	@echo "clean"

fclean : clean
	@rm -rf $(NAME)

re : fclean all