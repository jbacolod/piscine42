NAME = rush00

SRCS = $(wildcard srcs/*.c)

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Werror -Wextra -Wall -Iinclude -g

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

run: all
	./$(NAME) $(ARGS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all run clean fclean re
