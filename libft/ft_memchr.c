void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *ptr;
    unsigned char uc;

    ptr = (const unsigned char *)s;
    uc = (unsigned char)c;
    while (n > 0)
    {
        if (*ptr == uc)
            return ((void *)ptr);
        ptr++;
        n--;
    }
    return (NULL);
}