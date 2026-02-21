#include "libft.h"
char *ft_strdup(const char *s1)
{
    char *dup;
    size_t len;

    len = ft_strlen(s1);
    dup = (char *)malloc(len + 1);
    if (dup == NULL)
        return NULL;

    dup = ft_strcpy(dup, s1);
    return dup;
}
