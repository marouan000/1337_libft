#include "libft.h"

char    *ft_strrchr(char *s, int c)
{
    unsigned char   uc;
    int i;
    char *l_occurence;

    uc = (unsigned char)c;
    i = 0;
    l_occurence = NULL;
    while (s[i])
    {
        if (s[i] == uc)
            l_occurence = &s[i];
        i++;
    }
    if (s[i] == uc)
        return (&s[i]);
    return (l_occurence);
}