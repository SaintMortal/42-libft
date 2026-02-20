#include "libft.h"
void ft_putnbr(int n)
{
    if (n < 0)
    {
        write (1, "-", 1);
        n = n * -1;
    }

    if (n > 9)
    {
        ft_putnbr(n / 10);
        char digit = (n % 10) + '0';
        write(1, &digit, 1);
    }
    else
    {
        char digit = n + '0';
        write(1, &digit, 1);
    }
}