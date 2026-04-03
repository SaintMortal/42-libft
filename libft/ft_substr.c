#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
    size_t i;
    size_t s_len;

    s_len = ft_strlen(s);
    substr = malloc(len + 1);
    if (!substr)
        return (NULL);
    if (start >= s_len)
    {
        substr[0] = '\0';
        return (substr);
    }
    substr[len] = '\0';

    i = 0;
    while(i < len)
    {
        substr[i] = s[start + i];
        i++;
    }

    return (substr);
}

