CC= cc
CFLAGS= -Wall -Wextra -Werror
BIN= myprogram
CFILES= $(wildcard *.c)
OBJ= $(patsubst %.c, %.o, $(CFILES))
NAME= libft.a

all: $(NAME)
	
$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(BIN)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(BIN)

re: fclean all