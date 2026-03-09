#ifndef LIBFT_H
# define LIBFT_H

#include<stdlib.h>
#include<unistd.h>

int ft_strlen(const char *str);
void ft_putnbr(int n);
int	ft_atoi(char *str);
char *ft_strdup(const char *s1);
char *ft_strcpy(char *dst, const char *src);
int ft_strcmp(const char *s1, const char *s2);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_itoa(int n);
char *ft_substr(char const *s, unsigned int start, size_t len);
char **ft_split(char const *s, char c);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
#endif