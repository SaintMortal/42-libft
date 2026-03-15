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
void ft_putnbr_fd(int n, int fd);
void *ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const char *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
#endif