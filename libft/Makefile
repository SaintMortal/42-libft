# libft Makefile (static library)
NAME = libft.a
# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
# Source files and object files
SRCS = main.c ft_strlen.c ft_putnbr.c ft_atoi.c ft_strdup.c ft_strcpy.c ft_strcmp.c ft_strjoin.c ft_itoa.c ft_substr.c \
ft_split.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl.c ft_putnbr_fd.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c
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