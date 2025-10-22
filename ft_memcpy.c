#include "libft.h"

// void    *ft_memcpy(void *dst, const void *src, int n)
// {
//     unsigned char *s;
//     unsigned char *d;
//     int i;

//     // if (!dst && !src)
//     //     return (NULL);
//     s = (unsigned char *)src;
//     d = (unsigned char *)dst;
//     if (n)
//     {
//         i = 0;
//         while (i < n)
//         {
//             *(d--) = *(s--);
//             i++;
//         }
//     }
//     return (dst);
// }

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t    i;

    i = 0;
    if (!dst && !src)
        return (NULL);
    if (n)
    {
        while (i < n)
        {
            ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
            i++;
        }
    }
    return (dst);
}