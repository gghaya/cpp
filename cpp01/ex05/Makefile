# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/20 17:10:58 by gghaya            #+#    #+#              #
#    Updated: 2023/10/20 17:10:58 by gghaya           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC =    Harl.cpp main.cpp

OBJ = $(SRC:.cpp=.o)


CC = c++

FLAG = -Wall -Wextra -Werror -std=c++98

NAME = Harl

all : $(NAME)

$(NAME) : $(OBJ) Harl.hpp
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

clean :
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all