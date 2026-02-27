#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int len(int n)
{
    int i;

    i = 0;
    if (n < 0)
    {
        n = -n;
        i++;
    }
    while (n > 0)
    {
        n = n / 10;
        i++;
    }
    return (i);
}

char *ft_itoa(int n)
{
    char *str;
    int i;

    if(n == 0)
        return (ft_strdup("0"));
    i = len(n);
    str = malloc(i + 1);
    str[i + 1] = '\0';
    if (n < 0)
    {
        n = -n;
        str[0] = '-';
    }
    if (!str)
        return (NULL);
    i--;
    while (i >= 0 && str[i] != '-')
    {
        str[i] = (n % 10) + '0';
        n = n / 10;
        i--;
    }
    return (str);
}