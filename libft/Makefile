# Makefile with the name myprog.a
NAME = myprog.o
# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror
# Source files and object files
SRCS = main.c ft_strlen.c ft_putnbr.c ft_atoi.c ft_strdup.c ft_strcpy.c ft_strcmp.c ft_strjoin.c
OBJS = $(SRCS:.c=.o)

# Rules for building the library
all: $(NAME)

# Rule to compile source files into object files
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

# Rule to clean up object files
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all