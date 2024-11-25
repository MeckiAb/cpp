NAME = megaphone
CC = c++ -Wall -Wextra -Werror -std=c++98 -g #-fsanitize=address

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)
	./test.sh

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
