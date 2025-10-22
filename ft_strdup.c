#include "libft.h"

char    *ft_strdup(const char *s1)
{
    char    *arr;
    int i;

    arr = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
    if (!arr)
        return (NULL);
    i = 0;
    while (s1[i])
    {
        arr[i] = s1[i];
        i++;
    }
    arr[i] = '\0';
    return (arr);
}