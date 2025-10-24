#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *s;
    unsigned char *d;
    int i;

    if (!dst && !src)
        return (NULL);
    if (len != 0)
    {
        if (dst < src || dst > src + len)
        {
            ft_memcpy(dst, src, len);
            return (dst);
        }
        s = (unsigned char *)src;
        d = (unsigned char *)dst;
        i = 0;
        while (len > 0)
        {
            len--;
            *(d + len) = *(s + len);
        
        }
    }
    return (dst);
}