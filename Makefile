#include "libft.h"

CC= cc
CFLAGS= -Wall -Wextra -Werror
BIN= myprogram
CFILES= $(wildcard *.c)
OBJ= $(patsubst %.c, %.o, $(CFILES))
NAME= libft.a

all: $(NAME)
	
$(NAME): $(OBJ)
	ar rcs $(NAME) $?

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(BIN): $(NAME)
	$(CC) main.c $(NAME) -o $(BIN)

run: $(BIN)
	@./$(BIN)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(BIN) $(NAME)

re: fclean all