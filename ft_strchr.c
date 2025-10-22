#include "libft.h"

char    *ft_strchr(char *s, int c)
{
    unsigned char   uc;
    int i;

    uc = (unsigned char)c;
    i = 0;
    while (s[i])
    {
        if (s[i] == uc)
            return (&s[i]);
        i++;
    }
    if (s[i] == uc)
        return (&s[i]);
    return (NULL);
}