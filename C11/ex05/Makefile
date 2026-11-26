NAME = do-op

CC = cc
CFLAGS = -Wextra -Werror -Wall -Iinclude -g

SRC = $(wildcard src/*.c)
OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all make clean fclean re