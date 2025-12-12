NAME = SmartAnimals
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Animals.cpp Brain.cpp
OBJ	= $(patsubst %.cpp, %.o, $(SRCS))
CC = c++
RM = rm -f
INC = -I./

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
	@$(RM) ${OBJ}

fclean: clean
	@$(RM) $(NAME)

re: fclean all