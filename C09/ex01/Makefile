# Name of the file you want to use here
NAME = libft.a

# Program for compiling C programs
CC = cc
# Archiver commands
AR = ar rcs

# Extra flags to give to the C compiler
# The flag -g: it used for valgrind, for debugging information inside the compiled file
# The flag -Iinclude: -I tells to the preprocessor where to look for header files. While include is the name of the folder.
CFLAGS = -Werror -Wextra -Wall -Iinclude -g

# File c
SRCS = $(wildcard srcs/*.c) 

# Temporaries files
OBJS = $(SRCS:.c=.o)

# Default target: runs automatically when you type 'make' with no arguments.
# It triggers the creation of the static library defined in $(NAME).
all: $(NAME)

# Linking rule: depends on all object files ($(OBJS)).
# Combines all compiled .o files together into the final executable ($(NAME)).
#$(NAME): $(OBJS)
#	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

# Archive rule: depends on all object files ($(OBJS)).
# Bundles all compiled .o files into the static library archive $(NAME).
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

# Define a pattern rule that compiles every .c file into a .o file
# The flag -c: creates a file .o, file objects. Link togheter into a final executable
%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@

# Clean rule: removes temporary compiled object files (.o),
# keeping the static library.
clean:
	rm -f $(OBJS)

# Full clean rule: runs 'clean' first, then also deletes the static library
# defined in $(NAME), restoring the directory to its original state.
fclean: clean
	rm -f $(NAME)

# Re-build rule: forces a complete rebuild from scratch by deleting everything
# ('fclean') and compiling everything again ('all').
re: fclean all

# Declares these targets as "phony" (not actual files) so 'make' always runs
# them even if a file with one of these names happens to exist in the folder.
.PHONY: all clean fclean re
