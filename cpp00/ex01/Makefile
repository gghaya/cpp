SRC = Contact.cpp PhoneBook.cpp main.cpp

OBJ = $(SRC:.cpp=.o)


CC = c++

FLAG = -Wall -Wextra -Werror -std=c++98

NAME = PhoneBook

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)
	@echo "done"
clean :
	@rm -rf $(OBJ)
	@echo "clean"

fclean : clean
	@rm -rf $(NAME)

re : fclean all