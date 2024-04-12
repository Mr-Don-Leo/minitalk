SERVER =	server.c
SERVER_BONUS =	server_bonus.c

CLIENT =	client.c
CLIENT_BONUS =	client_bonus.c

LIB =	42-libft/libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SERVEROBJ = $(SERVER:.c=.o)
SERVEROBJ_BONUS = $(SERVER_BONUS:.c=.o)

CLIENTOBJ = $(CLIENT:.c=.o)
CLIENTOBJ_BONUS = $(CLIENT_BONUS:.c=.o)

all: server client

$(LIB):
	make -C 42-libft

server: $(SERVEROBJ) $(LIB)
	$(CC) $(CFLAGS) $(SERVEROBJ) $(LIB) -o server

client: $(CLIENTOBJ) $(LIB)
	$(CC) $(CFLAGS) $(CLIENTOBJ) $(LIB) -o client

server_bonus: $(SERVEROBJ_BONUS) $(LIB)
	$(CC) $(CFLAGS) $(SERVEROBJ_BONUS) $(LIB) -o server_bonus

client_bonus: $(CLIENTOBJ_BONUS) $(LIB)
	$(CC) $(CFLAGS) $(CLIENTOBJ_BONUS) $(LIB) -o client_bonus

bonus: server_bonus client_bonus

clean:
	rm -f $(SERVEROBJ) $(CLIENTOBJ) $(SERVEROBJ_BONUS) $(CLIENTOBJ_BONUS)
	make -C 42-libft clean

fclean: clean
	rm -f server client server_bonus client_bonus $(SERVEROBJ_BONUS) $(CLIENTOBJ_BONUS)
	make -C 42-libft fclean

re: fclean all