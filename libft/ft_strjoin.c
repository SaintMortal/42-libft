#include "libft.h"
char	*ft_strjoin(char const *s1, char const *s2)
{
    char *new_str;
    int len_s1;
    int len_s2;
    int i;

    len_s1 = ft_strlen(s1);
    len_s2 = ft_strlen(s2);
    new_str = malloc(len_s1 + len_s2 + 1);
    if (new_str == NULL)
        return NULL;

    i = 0;
    while (s1[i])
    {
        new_str[i] = s1[i];
        i++;
    }
    i = 0;
    while (s2[i])
    {
        new_str[len_s1 + i] = s2[i];
        i++;
    }
    new_str[len_s1 + i] = '\0';
    return new_str;
}