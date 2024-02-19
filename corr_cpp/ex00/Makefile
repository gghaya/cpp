# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 23:38:53 by gghaya            #+#    #+#              #
#    Updated: 2024/02/16 12:43:07 by gghaya           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC =  main.cpp BitcoinExchange.cpp

OBJ = $(SRC:.cpp=.o)


CC = c++

FLAG = -Wall -Wextra -Werror -std=c++98

NAME = btc

all : $(NAME)

$(NAME) : $(OBJ) BitcoinExchange.hpp
	$(CC) $(FLAG) $(OBJ) -o $(NAME)
	@echo "done"

%.o: %.cpp BitcoinExchange.hpp
	$(CC) $(FLAG) -c $< -o $@

clean :
	@rm -rf $(OBJ)
	@echo "clean"

fclean : clean
	@rm -rf $(NAME)

re : fclean all
