# Makefile with the name myprog.a
NAME = myprog.a 
# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror
# Source files and object files
SRCS = main.c ft_strlen.c ft_putnbr.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all