#include "libft.h"
#include <stdio.h>
#include<stdlib.h>
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
    size_t i;
    substr = malloc(len + 1);
    substr[len] = '\0';

    i = 0;
    while(i < len)
    {
        substr[i] = s[start + i];
        i++;
    }

    return (substr);
}

int main()
{
    printf("%s \n", ft_substr("ll1lal", 0, 2));
    return 0;
}