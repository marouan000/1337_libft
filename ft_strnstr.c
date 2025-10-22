#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;
    int in;

    i = 0;
    j = 0;
    in = 0;
    if (*needle == '\0')
        return ((char *)haystack);
    while (haystack[i] && !in && i < len)
    {
        j = 0;
        in = 1;
        while (needle[j] && (i + j < len))
        {
            if (haystack[i + j] != needle[j])
            {    
                in = 0;
                break;
            }
            j++;
        }
        if (needle[j])
            in = 0;
        i++;
    }
    if (in)
        return ((char *)&haystack[i - 1]);
    return (NULL);
}