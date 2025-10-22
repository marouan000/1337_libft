#include "libft.h"

void    *ft_memchr(void *s, int c, int n)
{
    unsigned char   *str;
    unsigned char   uc;
    int             i;

    str = (unsigned char *)s;
    uc = (unsigned char)c;
    i = 0;
    while (i < n)
    {
        if (str[i] == uc)
            return (&str[i]);
        i++;
    }
    return (NULL);
}