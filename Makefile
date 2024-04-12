SERVER =	server.c

CLIENT =	client.c

LIB =	42-libft/libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SERVEROBJ = $(SERVER:.c=.o)

CLIENTOBJ = $(CLIENT:.c=.o)

all: server client

$(LIB):
	make -C 42-libft

server: $(SERVEROBJ) $(LIB)
	$(CC) $(CFLAGS) $(SERVEROBJ) $(LIB) -o server

client: $(CLIENTOBJ) $(LIB)
	$(CC) $(CFLAGS) $(CLIENTOBJ) $(LIB) -o client

clean:
	rm -f $(SERVEROBJ) $(CLIENTOBJ)
	make -C 42-libft clean

fclean: clean
	rm -f server client
	make -C 42-libft fclean

re: fclean all