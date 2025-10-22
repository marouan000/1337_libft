#include "libft.h"

char    *ft_substr(char const *s, unsigned int start,size_t len)
{
    char    *p;
    size_t  i;

    p = (char *)malloc((len + 1) * sizeof(char));
    if (!p)
        return (NULL);
    if (start >= (size_t)(ft_strlen(s)))
    {
        *p = '\0';
        return (p);
    }
    i = 0;
    while (s[start] && i < len)
    {
        p[i] = s[start];
        i++;
        start++;
    }
    p[i] = '\0';
    return (p);
}