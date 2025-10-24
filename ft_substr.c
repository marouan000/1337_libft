#include "libft.h"

char    *ft_substr(char const *s, unsigned int start,size_t len)
{
    char    *p;
    size_t  i;

    if (start >= (size_t)(ft_strlen(s)))
    {
        p = (char *)malloc(sizeof(char) * 1);
        if (!p)
            return (NULL);
        *p = '\0';
        return (p);
    }
    if (len > ft_strlen(s) - start)
        len = ft_strlen(s) - start;
    p = (char *)malloc((len + 1) * sizeof(char));
    if (!p)
        return (NULL);
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