NAME = Zoo
CC = c++ -Wall -Wextra -Werror -std=c++98 -g 

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
INC = Animal.hpp Brain.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

%.o : %.cpp
	$(CC) -c $< -o $@

$(NAME) : $(OBJ) $(INC)
	$(CC) $(OBJ) -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re