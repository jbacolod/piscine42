NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

INCLUDES_DIR = includes
SRCS_DIR = srcs

SRCS = $(SRCS_DIR)/ft_putchar.c \
       $(SRCS_DIR)/ft_swap.c \
       $(SRCS_DIR)/ft_putstr.c \
       $(SRCS_DIR)/ft_strlen.c \
       $(SRCS_DIR)/ft_strcmp.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(INCLUDES_DIR)/ft.h
	$(CC) $(CFLAGS) -I$(INCLUDES_DIR) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
