#!/bin/sh

# 1. Compila i file .c in file oggetto (.o) con i flag di sicurezza
gcc -Wall -Wextra -Werror -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

# 2. Crea la libreria statica libft.a unendo tutti i file .o
ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

# 3. Indicizza la libreria (buona norma per la compatibilità)
ranlib libft.a

# 4. Pulisce i file oggetto temporanei
rm -f *.o
