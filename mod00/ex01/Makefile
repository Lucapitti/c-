NAME = phonebook
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp phone_book.cpp contact.cpp
OBJ	= $(patsubst %.cpp, %.o, $(SRCS))
CC = c++
RM = rm -f
INC = -I./


$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

all: $(NAME)

clean:
	$(RM) ${OBJ}

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re