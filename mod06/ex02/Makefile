NAME = identify
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Implement.cpp
OBJ	= $(patsubst %.cpp, %.o, $(SRCS))
CC = c++
RM = rm -f
INC = -I./

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

all: $(NAME)

clean:
	$(RM) ${OBJ}

fclean: clean
	$(RM) $(NAME)

re: fclean all