#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  i;
    size_t  j;
    size_t  iLenDst;

    i = 0;
    while (dst[i])
        i++;
    iLenDst = i;
    j = 0;
    if (dstsize)
    {
        while (src[j] && i < dstsize - 1)
        {
            dst[i] = src[j];
            i++;
            j++;
        }
    }
    while (src[j])
        j++;
    if (dstsize > iLenDst)
        dst[i] = '\0';
    else
        iLenDst = dstsize;
    return (iLenDst + j);
}