#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    char ch;
    int s_len;

    ch = (char)c;
    s_len = ft_strlen(s);

    while (s_len != 0)
    {
        if(s[s_len] == ch)
            return ((char *)s + s_len);
        s_len--;
    }
    if (ch == '\0')
        return ((char *)s + s_len);
    return (NULL);
}