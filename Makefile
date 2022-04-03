## INCLUDES ##
LIBFT:= ./libft/libft.a
PRINTF:= ./libft/ftprintf.a
INCLUDE:= $(PRINTF) $(LIBFT)

## SOURCE ##
SRC_CLIENT:= ./client.c
SRC_SERVER:= ./server.c

## BIN ##
BIN:= ./client ./server

## COMPILER ##
CC:= gcc
SFLAG:= -Wall -Werror -Wextra
DEBUG:= -fsanitize=address

all: $(BIN)

$(BIN):
	make -C ./libft
	$(CC) $(SRC_SERVER) -o server $(SFLAG) $(INCLUDE) $(DEBUG)
	$(CC) $(SRC_CLIENT) -o client $(SFLAG) $(INCLUDE) $(DEBUG)

clean:
	make -C ./libft clean
	rm -rf $(BIN) --verbose

fclean: clean
	make -C ./libft fclean

re: fclean all

run: re
	clear
	./server

