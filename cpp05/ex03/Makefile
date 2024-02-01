# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gghaya <gghaya@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 23:38:53 by gghaya            #+#    #+#              #
#    Updated: 2024/02/01 18:43:16 by gghaya           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC =  Bureaucrat.cpp main.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

OBJ = $(SRC:.cpp=.o)


CC = c++

FLAG = -Wall -Wextra -Werror -std=c++98

NAME = Bureaucrat

all : $(NAME)

$(NAME) : $(OBJ)  Bureaucrat.hpp AForm.hpp PresidentialPardonForm.hpp  RobotomyRequestForm.hpp ShrubberyCreationForm.hpp
	$(CC) $(FLAG) $(OBJ) -o $(NAME)
	@echo "done"
clean :
	@rm -rf $(OBJ)
	@echo "clean"

fclean : clean
	@rm -rf $(NAME)

re : fclean all
