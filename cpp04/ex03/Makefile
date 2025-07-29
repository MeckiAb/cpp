NAME = FFantasy
CC = c++ -Wall -Wextra -Werror -std=c++98 -g #-fsanitize=address

SRC = Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp main.cpp AMateria.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

%.o : %.cpp
	$(CC) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re