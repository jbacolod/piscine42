# Nome dell'eseguibile finale
NAME = rush-02

# Compilatore e flag
CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iincludes

# Elenco dei file sorgente (assicurati di aggiungere qui tutti i tuoi file .c presenti in src/)
SRC = src/main.c src/utils1.c src/utils2.c src/utils3.c

# Conversione automatica da .c a .o
OBJ = $(SRC:.c=.o)

# Regola principale
all: $(NAME)

# Creazione dell'eseguibile
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

# Regola per compilare i file .c in file oggettino .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Regola per compilare e fare run direttamente
run: all
	./$(NAME)

# Pulizia dei file oggetto
clean:
	rm -f $(OBJ)

# Pulizia completa (oggetti + eseguibile)
fclean: clean
	rm -f $(NAME)

# Ricompilazione totale
re: fclean all

.PHONY: all run clean fclean re
