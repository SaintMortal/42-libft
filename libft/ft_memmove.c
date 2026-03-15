#include "libft.h"
void	*ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    const unsigned char *s;

    d = (unsigned char *)dest;
    s = (const unsigned char *)src;

    if(dest == 0 || src == 0)
        return (0);
    if(src > dest)
    {
        return (ft_memcpy(dest, src, n));
    }
    else
    {
        while(n > 0)
        {
            n--;
            d[n] = s[n];
        }
    }
    return (d);
}