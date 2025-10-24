#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void    *p;

    if (size != 0 && count > SIZE_MAX / size)

    p = malloc(count * size);
    if (!p)
        return (NULL);
    ft_bzero(p, count * size);
    return (p);
}